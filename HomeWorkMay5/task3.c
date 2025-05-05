#include <stdio.h>
#include <stdlib.h>
int Power(int num,int exp){
	int result=1;
	while(exp-- >0){
		result*=num;
	}return result;
}
int countDigits(int num){
	int count=0;
	while(num!=0){
		count++;
		num/=10;
	}return count;
}
int isArmstrong(int num){
	int origin=num;
	int digcount=countDigits(num);
	int *digits=(int*)malloc(digcount*sizeof(int));
	if(digits==NULL){
		printf("Allocation error\n");
		return 0;
	}
	int tmp=num;
	for(int i=digcount-1;i>=0;--i){
		digits[i]=tmp%10;
		tmp/=10;
	}
	int sum=0;
	for(int i=0;i<digcount;++i){
		sum+=Power(digits[i],digcount);
	}free(digits);
	return sum==origin;
}

