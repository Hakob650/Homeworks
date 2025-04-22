#include <stdio.h>
int main(){
	int a=0,b=0;
	printf("enter a and b");
	scanf("%d %d",&a,&b);
	a=a^b;
	b=a^b;
	a=a^b;
	printf("swapped a= %d,b=%d",a,b);
	return 0;
}
