#include <stdio.h>
#include <stdlib.h>
void *custom_memcpy(void *dest,const void *src,size_t n){
    unsigned char *d=dest;
    const unsigned char *s=src;
    for(size_t i=0;i<n;++i){
        d[i]=s[i];
    }
    return dest;
}
void *custom_realloc(void *ptr,size_t oldSize,size_t newSize){
    if(ptr==NULL){
        return malloc(newSize);
    }
    if(newSize==0){
        free(ptr);
        return NULL;
    }
    void *newPtr=malloc(newSize);
    if(newPtr==NULL){
        return NULL;
    }
    size_t copySize=oldSize < newSize ? oldSize:newSize;
    custom_memcpy(newPtr,ptr,copySize);
    free(ptr);
    return newPtr;
}
int main(){
    int *arr;
    int oldsize=3;
    int newsize=5;
    arr=(int*)malloc(oldsize*sizeof(int));
    if(arr==NULL){
        printf("error in allocating\n");
        return 1;
    }
    for(int i=0;i<oldsize;++i){
        arr[i]=(i+1)*10;
    }
    printf("old array: ");
    for(int i=0;i<oldsize;++i){
        printf("%d",arr[i]);
    }printf("\n");
    arr=(int*)custom_realloc(arr,oldsize*sizeof(int),newsize*sizeof(int));
    if(arr==NULL){
        printf("reallocating error\n");
        return 1;
    }
    for(int i=oldsize;i<newsize;++i){
        arr[i]=(i+1)*10;
    }
    printf("new array: ");
    for(int i=0;i<newsize;++i){
        printf("%d",arr[i]);
    }printf("\n");
    free(arr);
    return 0;
}


