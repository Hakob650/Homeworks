#include <stdio.h>
int main(){
	int number=0,n=0,mask;
	printf("enter mask");
	scanf("%d",&mask);
	printf("enter n");
	scanf("%d",&n);
	printf("enter number");
	scanf("%d",&number);
	mask=mask<<n;
	int res=mask&number;
	printf("res is:  %d\n",res);
	return 0;
}
