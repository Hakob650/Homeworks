#include <stdio.h>
int main(){
	int a=0,b=0;
	printf("enter 2 numbers");
	scanf("%d %d",&a,&b);
	a=a^b;
	b=a^b;
	a=a^b;
	printf("swapped a=%d b=%d\n",a,b);
	return 0;
}
