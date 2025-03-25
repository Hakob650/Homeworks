#include <stdio.h>
int main(){
	int number=0,count=0;
	printf("mutqagreq tivy");
	scanf("%d",&number);
	while(number){
		count+=number&1;
		number>>=1;
	}if(count%2==0){
		printf("1eri qanaky zuyg e\n");
	}else{
		printf("1eri qanaky kent e\n");
	}return 0;
}	
