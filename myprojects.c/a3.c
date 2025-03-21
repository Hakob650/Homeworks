#include <stdio.h>

int main() {
    int n,a=0,b=1;
    printf("mutqagreq tveri qanaky");
    scanf("%d",&n);
    if((int) n>=1){
      printf("%d",a);
    }if((int) n>=2){
      printf("%d",b);
    } for(int i=3;i<=n;i++){
       int  h=a+b;
       printf("%d",h);
       a=b;
       b=h;
    }printf("\n");   
     return 0;
}     
