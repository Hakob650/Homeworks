#include <stdio.h>
int main(){
	printf("enter number");
	int number=0;
	scanf("%d",&number);
	int bitmask=1;
	if(number&bitmask){
		printf("number is odd\n");
	}else{
	        printf("number is even\n");
	}return 0;
}	
