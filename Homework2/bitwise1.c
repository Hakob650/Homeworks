#include <stdio.h>
int main(){
	int number=0,bitmask=1;
	printf("enter number");
	scanf("%d",&number);
	if(number&bitmask){
		printf("odd\n");
	}else{
		printf("even\n");
	}return 0;
}	
