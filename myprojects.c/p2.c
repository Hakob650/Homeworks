#include <stdio.h>
int main(){
	int number=0,count=0;
	printf("enter number");
	scanf("%d",&number);
	int bitmask=1;
	if(number&bitmask){
	    count+=number&1;
            number>>=1;
        }if(count%2==0){
		printf("the count of 1's is even");
	}else{
	        printf("the count of 1's is odd");
	}return 0;
}	
 	    
