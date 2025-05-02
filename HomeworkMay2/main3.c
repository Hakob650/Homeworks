#include <stdio.h>

#include "Vector.h"

#include <stdlib.h>

int main(){

    Vector v1,v2;

    vector_init_fill(&v2,5,3);

    if(v2.data==NULL){

        printf("allocation error\n");

        return 1;

    }

    vector_init(&v1);

    if(v1.capacity>0 && v1.data==NULL){

        printf("allocation failed\n");

        return 1;

    }

    if(vector_assign(&v1,&v2)==NULL){

        printf("assigning failed\n");

        vector_destroy(&v1);

        vector_destroy(&v2);

        return 1;

    }

    printf("v1 after assignment: ");

    for(size_t i=0;i<v1.size;++i){

        printf("%d ",v1.data[i]);

    }printf("\n");



    vector_destroy(&v1);

    vector_destroy(&v2);



    return 0;

}
