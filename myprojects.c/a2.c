#include <stdio.h>
int main(){
   int a=0,b=0;
   printf("enter a and b");
   scanf("%d %d",&a,&b);
   int c=1;
   for(int i=0;i<b;i++){
	c*=a;
    }printf("%d",c);
   return 0;
}   
