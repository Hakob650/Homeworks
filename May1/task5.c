#include <stdio.h>
#include <stdlib.h>
void* my_memset(void* p,int value,size_t size){
     char *ptr=p;
    for(size_t i=0;i<size;++i){
        ptr[i]=(unsigned char)value;
    }return ptr;
}
void* my_calloc(int count,size_t size){
    size_t total_size=count*size;
    void* p=malloc(total_size);
    if(p){
        my_memset(p,0,total_size);
    }return p;
}
int main(){
    int size=5;
    int *arr=(int*)my_calloc(size,sizeof(int));
    if(arr==NULL){
        return 1;
    }
    for(int i=0;i<size;++i){
        printf("arr[%d]=%d\n",i,arr[i]);
    }free(arr);
    return 0;
}
