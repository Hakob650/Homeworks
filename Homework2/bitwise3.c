#include <stdio.h>
int main(){
	int number=0,count=0;
        printf("enter number");
	scanf("%d",&number);
	while(number){
		count+=number&1;
		number>>=1;
	}printf("%d\n",count);
	return 0;
}	
