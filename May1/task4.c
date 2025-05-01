#include <stdio.h>
#include <stdlib.h>
int main(){
    int *arr;
    int original_size,new_size;
    scanf("%d",&original_size);
    arr=(int*)malloc(original_size*sizeof(int));
    if(arr==NULL){
        printf("error allocating memory\n");
        return 1;
    }
    printf("enter %d integer: \n",original_size);
    for(int i=0;i<original_size;++i){
        printf("arr[%d]=",i);
        scanf("%d",&arr[i]);
    }
    printf("enter new size: ");
    scanf("%d",&new_size);
    arr=(int*)realloc(arr,new_size*sizeof(int));
    if(arr==NULL){
        printf("reallocating error\n");
        return 1;
    }
    printf("enter new %d elements\n",new_size-original_size);
    for(int i=original_size;i<new_size;++i){
        printf("arr[%d]=",i);
        scanf("%d",&arr[i]);
    }
    printf("reallocated array\n");
    for(int i=0;i<new_size;++i){
        printf("%d\n",arr[i]);
    }printf("\n");
    free(arr);
    return 0;
}

                

