#include <stdio.h>
int main(){
int a=1,b=3,temp;
printf("Before swap:\n");
printf("%d",a);
printf("%d",b);
temp=a;
a=b;
b=temp;
printf("After swap:\n");
printf("%d\n", a);
printf("%d\n", b);
return 0;
}
