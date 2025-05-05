#include <stdio.h>
int gcd(int a,int b);
int gcdofArray(int arr[],int size);
int main(){
	int numbers[]={24,36,60,48};
	int size=sizeof(numbers)/sizeof(numbers[0]);
	int result=gcdofArray(numbers,size);
	printf("The GCD of the array is: %d\n",result);
	return 0;
}

