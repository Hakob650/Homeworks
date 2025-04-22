#include <stdio.h>
int main(){
	int number=0;
	printf("enter number");
	scanf("%d",&number);
	if((number&(number-1))==0){
		printf("tivy 2 i astichan e");
	}else{
		printf("tivy 2 i astichan che");
	}return 0;
}
