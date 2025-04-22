#include <stdio.h>
int main(){
	int number=0,n=0;
	printf("enter number");
	scanf("%d",&number);
	printf("enter the index of the bit");
	scanf("%d",&n);
	number|=(1<<n);
	printf("changed: %d\n",number);
	return 0;
}	
