#include <stdio.h>
int main(){
    int count=0,number=0;
    printf("enter number");
    scanf("%d",&number);
    while(number){
	count+=number&1;
        number>>=1;
    }printf("1eri qanak: %d\n",count);
     return 0;
}    
