#include <qubit/qubit.h>

#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

static inline bool
vector_invalid(const struct qb_vector* vector)
{
	return (vector == NULL || vector->data_size == 0);
}

static inline bool
vector_invalid_bounds(const struct qb_vector* vector,
	const unsigned int index)
{
	return (index > vector->size || index < 0);
}

static inline unsigned int
vector_closest_power(const unsigned int size)
{
	return pow(2, ceil(log2(size)));
}

void
qb_vector_create(struct qb_vector* vector, const unsigned int initial_size,
	const size_t data_size)
{
	if (vector == NULL || data_size == 0) {
		return;
	}

	vector->buffer = NULL;
	vector->size = 0;
	vector->allocated = initial_size;
	*(size_t*)&vector->data_size = data_size;

	if (initial_size > 0) {
		vector->buffer = malloc(data_size * initial_size);
	}
}

void
qb_vector_destroy(struct qb_vector* vector)
{
	if (vector_invalid(vector)) {
		return;
	}

	free(vector->buffer);
	*(size_t*)&vector->data_size = 0;
}

void*
qb_vector_lookup(const struct qb_vector* vector, const unsigned int index)
{
	if (vector_invalid(vector)) {
		return NULL;
	}

	if (vector_invalid_bounds(vector, index)) {
		return NULL;
	}

	if (vector->size == 0) {
		return NULL;
	}

	return (vector->buffer + (vector->data_size * index));
}

void*
qb_vector_resize(struct qb_vector* vector, const unsigned int size)
{
	if (vector_invalid(vector)) {
		return NULL;
	}

	if (size < vector->size) {
		vector->size = size;
		vector->allocated = size;

		vector->buffer = realloc(vector->buffer, vector->data_size * vector->size);

		return NULL;
	}

	return NULL;
}

void*
qb_vector_push(struct qb_vector* vector)
{
	if (vector_invalid(vector)) {
		return NULL;
	}

	if (vector->allocated == 0) {
		vector->buffer = malloc(vector->data_size *
			++vector->allocated);	
	} else if (vector->size + 1 > vector->allocated) {
		vector->allocated = vector_closest_power(vector->size + 1);
		vector->buffer = realloc(vector->buffer, vector->data_size *
			vector->allocated);
	}

	return (vector->buffer + (vector->data_size * vector->size++));
}

void
qb_vector_pop_back(struct qb_vector* vector)
{
	if (vector_invalid(vector)) {
		return;
	}

	if (vector->size == 0 || vector->allocated == 0) {
		return;
	}

	if (vector->size - 1 == 0) {
		free(vector->buffer);
		vector->allocated = 0;
	} else if (vector->size - 1 == vector->allocated / 2) {
		vector->allocated = vector_closest_power(vector->size - 1);
		vector->buffer = realloc(vector->buffer, vector->data_size *
			vector->allocated);
	}

	vector->size--;
}

void
qb_vector_pop_front(struct qb_vector* vector)
{
	if (vector_invalid(vector)) {
		return;
	}

	if (vector->size == 0 || vector->allocated == 0) {
		return;
	}

	memmove(vector->buffer, vector->buffer + vector->data_size,
		vector->data_size * vector->size);

	if (vector->size - 1 == 0) {
		free(vector->buffer);
		vector->allocated = 0;
	} else if (vector->size - 1 == vector->allocated / 2) {
		vector->allocated = vector_closest_power(vector->size - 1);
		vector->buffer = realloc(vector->buffer, vector->data_size *
			vector->allocated);
	}

	vector->size--;
}

void*
qb_vector_insert(struct qb_vector* vector, const unsigned int index)
{
	if (vector_invalid(vector)) {
		return NULL;
	}

	if (vector_invalid_bounds(vector, index)) {
		return NULL;
	}

	if (vector->size + 1 == vector->allocated) {
		vector->allocated = vector_closest_power(vector->size + 1);
		vector->buffer = realloc(vector->buffer, vector->data_size *
			vector->allocated);
	}

	memmove(vector->buffer + (vector->data_size * (index + 1)),
		vector->buffer + (vector->data_size * index),
		vector->data_size * (vector->size - index));

	vector->size++;

	return (vector->buffer + (vector->data_size * index));
}

void
qb_vector_remove(struct qb_vector* vector, const unsigned int index)
{
	if (vector_invalid(vector)) {
		return;
	}

	if (vector_invalid_bounds(vector, index) || vector->size == 0) {
		return;
	}

	if (vector->size - 1 == 0) {
		free(vector->buffer);
		vector->buffer = NULL;
		vector->size = 0;
		vector->allocated = 0;

		return;
	}

	memmove(vector->buffer + (vector->data_size * index),
		vector->buffer + (vector->data_size * (index + 1)),
		vector->data_size * (vector->size - index));

	if (vector->size - 1 == vector->allocated / 2) {
		vector->allocated = vector_closest_power(vector->size - 1);
		vector->buffer = realloc(vector->buffer, vector->data_size *
			vector->allocated);
	}

	vector->size--;
}
