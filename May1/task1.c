#include <stdio.h>
#include <stdlib.h>
int main(){
    int *arr;
    int size;
    printf("enter array size");
    scanf("%d",&size);
    arr=(int*)malloc(size*sizeof(int));
    if(arr==NULL){
        printf("error in allocation\n");
        return 1;
    }
    printf("enter arrays %d elements\n",size);
    for(int i=0;i<size;++i){
        printf("element %d",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<size;++i){
        printf("%d",arr[i]);
    }printf("\n");
    free(arr);
    return 0;
}
