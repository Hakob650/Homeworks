#include <stdio.h>
#include <stdlib.h>
int main(){
    float *arr;
    int size;
    printf("enter array size");
    scanf("%d",&size);
    arr=(float*)calloc(size,sizeof(float));
    if(arr==NULL){
        printf("error allocating memory\n");
        return 1;
    }
    printf("enter %d array elements\n",size);
    for(int i=0;i<size;++i){
        printf("arr[%d]=",i);
        scanf("%f",&arr[i]);
    }
    printf("arrays elements\n");
    for(int i=0;i<size;++i){
        printf("%.2f\n",arr[i]);
    }printf("\n");
    free(arr);
    return 0;
}




