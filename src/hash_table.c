#include <qubit/qubit.h>

#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#include <qubit/hash.h>

static bool
_qb_hash_table_invalid(const struct qb_hash_table* hash_table)
{
	return (hash_table == NULL);
}

static struct qb_hash_bucket*
_qb_hash_buckets_create(const size_t table_size)
{
	struct qb_hash_bucket* buckets = calloc(table_size, sizeof(struct qb_bucket));

	return buckets;
}

static void
_qb_hash_buckets_destroy(struct qb_hash_bucket* buckets, const size_t table_size)
{
	for (size_t index = 0; index < table_size; index++) {
		free(buckets[index].buffer);
	}

	free(buckets);
}

static int
_qb__qb_hash_bucket_hash_index(const struct qb_bucket* bucket, const uint64_t hash)
{
	for (int index = 0; index < bucket->size; index++) {
		if (bucket->hash[index] == hash) {
			return index;
		}
	}

	return -1;
}

static void*
_qb_hash_bucket_hash_add(struct qb_bucket* bucket, const uint64_t hash,
	const size_t data_size)
{
	bucket->buffer = realloc(bucket->buffer, (sizeof(*bucket->hash) 
		+ data_size) * (bucket->size + 1));

	bucket->hash = bucket->buffer;
	bucket->data = (void*)(bucket->hash + bucket->size);

	memmove(bucket->data + sizeof(*bucket->hash), bucket->data, 
		data_size * bucket->size);

	bucket->hash[bucket->size] = hash;
	bucket->data += sizeof(*bucket->hash);

	bucket->size++;
	return (bucket->data + (data_size * (bucket->size - 1)));
}

static void
_qb_hash_bucket_hash_remove(struct qb_bucket* bucket, const int index,
	const size_t data_size)
{
	if (bucket->size - 1 == 0) {
		bucket->size--;
		free(bucket->buffer);
		bucket->buffer = NULL;

		return;
	}

	// TODO: Re-implement for when index = 0

	memmove(bucket->hash + index, bucket->hash + index + 1, sizeof(*bucket->hash)
		* (bucket->size - index));
	memmove(bucket->data + (data_size * index), bucket->data
		+ (data_size * (index + 1)), data_size * (bucket->size - index));

	bucket->size--;
	memmove(bucket->data - sizeof(*bucket->hash), bucket->data,
		data_size * bucket->size);

	bucket->data -= sizeof(*bucket->hash);

	bucket->buffer = realloc(bucket->buffer, (sizeof(*bucket->hash) + data_size)
		* bucket->size);
}

void
qb_hash_table_create(struct qb_hash_table* hash_table, const size_t table_size,
	const size_t data_size)
{
	if (_qb_hash_table_invalid(hash_table) || table_size == 0 || data_size == 0) {
		return;
	}

	*(size_t*)&hash_table->data_size = data_size;
	*(size_t*)&hash_table->table_size = table_size;

	hash_table->buckets = _qb_hash_buckets_create(table_size);
}

void
qb_hash_table_destroy(struct qb_hash_table* hash_table)
{
	if (_qb_hash_table_invalid(hash_table)) {
		return;
	}

	_qb_hash_buckets_destroy(hash_table->buckets, hash_table->table_size);
	hash_table->buckets = NULL;
	
	*(size_t*)&hash_table->data_size = 0;
	*(size_t*)&hash_table->table_size = 0;
}

void*
qb_hash_table_insert(struct qb_hash_table* hash_table, const uint64_t hash)
{
	int index;
	struct qb_hash_bucket* bucket;

	if (_qb_hash_table_invalid(hash_table)) {
		return NULL;
	}

	bucket = (hash_table->buckets + (hash % hash_table->table_size));

	if (bucket->size > 0) {
		index = _qb__qb_hash_bucket_hash_index(bucket, hash);
		if (index >= 0) {
			return NULL;
		}
	}

	return _qb_hash_bucket_hash_add(bucket, hash, hash_table->data_size);
}

void
qb_hash_table_remove(struct qb_hash_table* hash_table, const uint64_t hash)
{
	int index;
	struct qb_hash_bucket* bucket;

	if (_qb_hash_table_invalid(hash_table)) {
		return;
	}

	bucket = (hash_table->buckets + (hash % hash_table->table_size));

	if (bucket->size > 0) {
		index = _qb__qb_hash_bucket_hash_index(bucket, hash);
		if (index < 0) {
			return;
		}
	
		_qb_hash_bucket_hash_remove(bucket, index, hash_table->data_size);
	}
}

void*
qb_hash_table_lookup(const struct qb_hash_table* hash_table,
	const uint64_t hash)
{
	int index;
	struct qb_hash_bucket* bucket;

	if (_qb_hash_table_invalid(hash_table)) {
		return NULL;
	}

	bucket = (hash_table->buckets + (hash % hash_table->table_size));

	index = _qb__qb_hash_bucket_hash_index(bucket, hash);
	if (index < 0) {
		return NULL;
	}

	return (bucket->data + (hash_table->data_size * index));
}

void
qb_hash_table_foreach(struct qb_hash_table* hash_table, 
	const qb_hash_table_each_fn each_fn)
{
	struct qb_hash_bucket* bucket;

	for (int i = 0; i < hash_table->table_size; i++) {
		bucket = hash_table->buckets + i;
		for (int j = 0; j < bucket->size; j++) {
			each_fn(bucket->data + (j * hash_table->data_size));
		}
	}
}
