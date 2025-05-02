#ifndef VECTOR_H

#define VECTOR_H



#include <stddef.h>

typedef struct Vector {

    int *data;

    size_t size;

    size_t capacity;

}Vector;

void vector_init(Vector*);

void vector_init_size(Vector*,size_t);

void vector_init_fill(Vector*,size_t,int);

void vector_destroy(Vector*);

void vector_copy(Vector*,const Vector*);

Vector* vector_assign(Vector*,const Vector*);

int* vector_at(Vector*,size_t);

int vector_empty(const Vector*);

size_t vector_size(const Vector*);

size_t vector_capacity(const Vector*);

void vector_reserve(Vector*,size_t);

void vector_clear(Vector*);

void vector_push_back(Vector*,int);

void vector_pop_back(Vector*);

void vector_insert(Vector*,size_t,int);

void vector_erase(Vector*,size_t);

void vector_resize(Vector*,size_t);

void vector_swap(Vector*,Vector*);

int *vector_front(Vector*);

int* vector_back(Vector*);


#endif
