#include <stdio.h>
#include <stdlib.h>
int Power(int num,int exp);
int countDigits(int num);
int isArmstrong(int num);
int main(){
	int num;
	printf("Enter a number: ");
	scanf("%d",&num);
	if(isArmstrong(num)){
		printf("%d is Armstrong number.\n",num);
	}else{
		printf("%d is not Armstrong number.\n",num);
	}
	return 0;
}
