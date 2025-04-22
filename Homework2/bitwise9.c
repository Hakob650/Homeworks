#include <stdio.h>
int main(){
	int number=0,i;
	printf("enter number");
	scanf("%d",&number);
	printf("enter bit position");
	scanf("%d",&i);
	if((number>>i)&1){
		printf("bit is 1: %d\n",i);
	}else{
		printf("bit is 0: %d\n",i);
	}return 0;
}	
