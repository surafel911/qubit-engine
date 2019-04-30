#ifndef QUBIT_QUBIT_H
#define QUBIT_QUBIT_H

#include <stdarg.h>
#include <stddef.h>
#include <stdint.h>
#include <stdbool.h>

#define QB_ARRAY_SIZE(x) (sizeof(x)/sizeof(*x))

#define QB_VECTOR_INIT {.buffer = NULL, .size = 0, .allocated = 0, .data_size = 0}

#define QB_VECTOR_FOREACH(vector, index) \
 for(int index = 0; index < vector.size; index++)

#define QB_VECTOR_LOOKUP(vector, index, type) \
 *(type*)(vector.buffer + (vector.data_size * index))

#define QB_HASH_TABLE_INIT {.buckets = NULL, .data_size = 0, .table_size = 0}

#define QB_FATAL_ERROR(format, ...) \
qb_log_error(format, ##__VA_ARGS__); \
qb_abort(format, ##__VA_ARGS__); \

typedef void (*qb_log_fn)(const char*);
typedef void (*qb_abort_fn)(const char*);
typedef void (*qb_hash_table_each_fn)(void*);

struct qb_vector {
	void* buffer;

	const size_t data_size;
	unsigned int size, allocated;
};

struct qb_hash_table {
	struct qb_bucket {
		void* buffer;
		void* data;
		uint64_t* hash;

		size_t size;
	} *buckets;

	const size_t data_size, table_size;
};

void
qb_setup(void);

void
qb_update(void);

void
qb_terminate(void);

const double
qb_delta(void);

void
qb_request_exit(void);

bool
qb_exit_requested(void);

void
qb_abort(const char* format, ...);

void
qb_abort_set_fn(const qb_abort_fn abort_fn);

void
qb_hash_table_create(struct qb_hash_table* hash_table,
	const size_t table_size, const size_t data_size);

void
qb_hash_table_destroy(struct qb_hash_table* hash_table);

void*
qb_hash_table_insert(struct qb_hash_table* hash_table, const uint64_t hash);

void
qb_hash_table_remove(struct qb_hash_table* hash_table, const uint64_t hash);

void*
qb_hash_table_lookup(const struct qb_hash_table* hash_table,
	const uint64_t hash);

void
qb_hash_table_foreach(struct qb_hash_table* hash_table,
	const qb_hash_table_each_fn each_fn);

void
qb_log_info(const char* format, ...);

void
qb_log_warn(const char* format, ...);

void
qb_log_error(const char* format, ...);

void
qb_log_info_set_fn(const qb_log_fn log_fn);

void
qb_log_warn_set_fn(const qb_log_fn log_fn);

void
qb_log_error_set_fn(const qb_log_fn log_fn);

void
qb_vector_create(struct qb_vector* vector, const unsigned int initial_size,
	const size_t data_size);

void
qb_vector_destroy(struct qb_vector* vector);

void*
qb_vector_lookup(const struct qb_vector* vector, const unsigned int index);

void*
qb_vector_resize(struct qb_vector* vector, const unsigned int size);

void*
qb_vector_push(struct qb_vector* vector);

void
qb_vector_pop_back(struct qb_vector* vector);

void
qb_vector_pop_front(struct qb_vector* vector);

void*
qb_vector_insert(struct qb_vector* vector, const unsigned int index);

void
qb_vector_remove(struct qb_vector* vector, const unsigned int index);

void
qb_window_create(const char* title, const unsigned int width,
	const unsigned height, const bool fullscreen);

void
qb_window_destroy(void);

bool
qb_window_has_focus(void);

void
qb_window_take_focus(void);

bool
qb_window_get_fullscreen(void);

void
qb_window_set_fullscreen(const bool fullscreen);

void
qb_window_get_size(unsigned int* width, unsigned int* height);

void
qb_window_set_size(const unsigned int width, const unsigned int height);

void
qb_window_get_max_size(unsigned int* width, unsigned int* height);

#endif // QUBIT_QUBIT_H
