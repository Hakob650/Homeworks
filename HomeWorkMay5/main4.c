#include <stdio.h>
#include <stdlib.h>
int binary_search(int arr[],int size,int target);
int main(){
	int size;
	printf("Enter the array size: ");
	scanf("%d",&size);
	if(size<=0){
		printf("Array size is positive.\n");
		return 1;
	}
	int *arr=(int*)malloc(size*sizeof(int));
	if(arr==NULL){
		printf("Allocation error.\n");
		return 1;
	}for(int i=0;i<size;++i){
	  scanf("%d",&arr[i]);
		if(i>0&&arr[i]<arr[i-1]){
			printf("Array must be sorted in ascending order.\n");
			free(arr);
			return 1;
		}
	}
	int target;
	printf("Enter the value to search: ");
	scanf("%d",&target);
	int result=binary_search(arr,size,target);
	if(result!=-1){
		printf("Target found at index: %d\n",result);
	}else{
		printf("Target not found.\n");
	}free(arr);
	return 0;
}
