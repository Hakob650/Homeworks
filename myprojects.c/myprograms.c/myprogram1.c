#include <stdio.h>
int main(){
int a=1,b=3,temp;
printf("Before swap:\n");
printf("a=%d",a);
printf("b=%d",b);
temp=a;
a=b;
b=temp;
printf("After swap:\n");
printf("a = %d\n", a);
printf("b = %d\n", b);
return 0;
}
