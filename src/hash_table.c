#include <qubit/qubit.h>

#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#include <qubit/hash.h>

#define QB_HASH_TABLE_MIN_SIZE			11
#define QB_HASH_TABLE_MIN_LOAD_FACTOR	0.25
#define QB_HASH_TABLE_MAX_LOAD_FACTOR	0.75

static bool
_qb_hash_table_invalid(const struct qb_hash_table* hash_table)
{
	return (hash_table == NULL);
}

static int
_qb_hash_table_find_next_prime(int num)
{
	int i;

	for (;;) {
		for (i = 2; i <= num / 2; i++) {
			if (num % i == 0) {
				break;
			}
		}

		if (i <= num / 2) {
			num++;
		} else {
			return num;
		}
	}
}

static float
_qb_hash_table_get_load_factor(const struct qb_hash_table* hash_table)
{
	int count = 0;
	for (int i = 0; i < hash_table->size; i++) {
		if (hash_table->hash[i] != 0) {
			count++;
		}
	}

	return count / (float)hash_table->size;
}

void
qb_hash_table_create(struct qb_hash_table* hash_table,
	const size_t data_size)
{
	if (_qb_hash_table_invalid(hash_table) || data_size == 0) {
		return;
	}

	*(size_t*)&hash_table->data_size = data_size;

	hash_table->buffer = calloc(QB_HASH_TABLE_MIN_SIZE, data_size * 
		sizeof(*hash_table->hash));
	
	hash_table->size = QB_HASH_TABLE_MIN_SIZE;
	hash_table->data = hash_table->buffer;
	hash_table->hash = hash_table->data + (data_size * hash_table->size);
}

void
qb_hash_table_destroy(struct qb_hash_table* hash_table)
{
	if (_qb_hash_table_invalid(hash_table)) {
		return;
	}

	hash_table->size = 0;
	hash_table->data = NULL;
	hash_table->hash = NULL;	
	hash_table->buffer = NULL;	

	*(size_t*)&hash_table->data_size = 0;
}

void*
qb_hash_table_insert(struct qb_hash_table* hash_table, const uint64_t hash)
{
	int index;

	if (_qb_hash_table_invalid(hash_table)) {
		return NULL;
	}

	if (_qb_hash_table_get_load_factor(hash_table) >
		QB_HASH_TABLE_MAX_LOAD_FACTOR) {
		// TODO: Finish this implementation
	}

	index = hash % hash_table->size;
	if (hash_table->hash[index] != 0) {
		return NULL;
	}

	hash_table->hash[index] = hash;

	return hash_table->data + (hash_table->data_size * index);
}

void
qb_hash_table_remove(struct qb_hash_table* hash_table, const uint64_t hash)
{
	int index;

	if (_qb_hash_table_invalid(hash_table)) {
		return;
	}

	if (_qb_hash_table_get_load_factor(hash_table) <=
		QB_HASH_TABLE_MIN_LOAD_FACTOR) {
		// TODO: Finish this implementation
	}

	index = hash % hash_table->size;

	hash_table->hash[index] = 0;

	memset(hash_table->data + (hash_table->data_size * index), 0, hash_table->data_size);
}

void*
qb_hash_table_lookup(const struct qb_hash_table* hash_table,
	const uint64_t hash)
{
	int index;

	if (_qb_hash_table_invalid(hash_table)) {
		return NULL;
	}

	index = hash % hash_table->size;

	// TODO: Finish this implementation

	return NULL;
}

void
qb_hash_table_foreach(struct qb_hash_table* hash_table, 
	const qb_hash_table_each_fn each_fn)
{
	// TODO: Finsih this implementation
}
