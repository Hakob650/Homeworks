#include <stdio.h>
int main(){
	int number=0;
	printf("enter  number");
	scanf("%d",&number);
	if((number>0)&&(number&(number-1))==0){
			printf("number is power of 2");
        }else{
	                printf("number is not power of 2");
        }return 0;
	}	

