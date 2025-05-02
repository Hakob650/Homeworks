#include "Vector.h"
#include <stdio.h>
int main(){
    
    Vector vector1;

    vector_init_fill(&vector1,5,10);

    Vector vector2;

    vector_copy(&vector2,&vector1);
    printf("%lu\n", vector2.size);
    for(size_t i=0;i<vector2.size;++i){
        printf("%d\n",vector2.data[i]);
    }

    vector_destroy(&vector1);

    vector_destroy(&vector2);

    return 0;
}

