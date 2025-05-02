#include <stdio.h>

#include "Vector.h"

int main(){

	Vector v;

	vector_init(&v);

	printf("Initially: \n");
	printf("Empty: %d\n",vector_empty(&v));
	printf("Size: %lu\n",vector_size(&v));
	printf("Capacity: %lu\n",vector_capacity(&v));

	vector_reserve(&v,10);

	printf("After Reserve: \n");
	printf("Empty: %d\n",vector_empty(&v));
        printf("Size: %lu\n",vector_size(&v));
        printf("Capacity: %lu\n",vector_capacity(&v));
	
	vector_destroy(&v);

	return 0;

}


























