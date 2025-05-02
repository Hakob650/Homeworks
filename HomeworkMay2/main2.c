#include "Vector.h"

#include <stdio.h>

int main(){

    Vector v;

    vector_init_fill(&v,5,4);

    for(int i=0;i<5;++i){

        printf("%d ",v.data[i]);

    }

    printf("Vector Size: %lu\n",v.size);



    int *at2=vector_at(&v,2);

    if(at2){

        printf("Element at index 2: %d\n",*at2);

    }

    int *front=vector_front(&v);

    if(front){

        printf("Front Element: %d\n",*front);

    }

    int *back=vector_back(&v);

    if(back){

        printf("Back Element: %d\n",*back);

    }

    vector_destroy(&v);

    return 0;

}
