#include <stdio.h>

#include "Vector.h"

int main(){

	Vector v;
	
	vector_init_fill(&v,5,3);

	for(int i=0;i<=5;++i){

		vector_push_back(&v,i*10);

	}

	printf("After Push Back: \n");
	
	for(size_t i=0;i<v.size;++i){
		
		printf("%d ",v.data[i]);

	}printf("\n");

	vector_insert(&v,2,99);

	printf("After inserting at pos 2: \n");

	for(size_t i=0;i<v.size;++i){

		printf("%d ",v.data[i]);

	}printf("\n");

	vector_erase(&v,8);

	printf("After erase at pos 3: \n");

	 for(size_t i=0;i<v.size;++i){

                printf("%d ",v.data[i]);

        }printf("\n");

	vector_resize(&v,8);
	printf("After Resize to 8:\n Size=%lu,Capacity=%lu\n",v.size,v.capacity);

	vector_pop_back(&v);
	printf("After Pop Back: \nSize=%lu\n",v.size);

	vector_clear(&v);
	printf("After Clear: \nSize=%lu,Is empty=%d\n",v.size,vector_empty(&v));

	Vector v2;
	vector_init_fill(&v2,3,7);
	vector_swap(&v,&v2);

	printf("After Swap: \n");
	printf("v.size=%lu,v.data[0]=%d\n" ,v.size,v.data[0]);
	printf("v2.size=%lu,v2 is empt=%d\n",v2.size,vector_empty(&v2));

	vector_destroy(&v);
	vector_destroy(&v2);

	return 0;
}








