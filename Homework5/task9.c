#include <stdio.h>

int main() {
    int a=0,d=1;
    printf("enter number");
    scanf("%d",&a);
    while(a/d>=10){
        d*=10;
    }while(d){
        printf("%d",a/d);
        a%=d;
        d/=10;
    if(d){
       printf(",");
      }       
    }return 0;
}    
 
