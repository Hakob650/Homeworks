#include <stdio.h>
int main(){
	printf("enter the value of a");
	printf("loop 0-100");
	int a=0;
	scanf("%d",&a);
	if(a%3==0&&a%5==0){
	   printf("FizzBuzz");
        }else if(a%3==0){
           printf("Fizz");
        }else if(a%5==0){
           printf("Buzz");
        }else{
	   printf("other values");	
	return 0;
         }
        } 	
