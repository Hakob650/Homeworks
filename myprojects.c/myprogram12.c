#include <stdio.h>
int main(){
int c=0;
double f=0;
printf("Input the value of temperature in Celsius");
scanf("%d",&c);
f=(c*9/5)+32;
printf(".1%lf",f);
return 0;
}
