#include <stdio.h>
int gcdofArray(int arr[],int size){
	int gcd(int a,int b){
		return (b==0) ? a:gcd(b,a%b);
	}
	if(size==1){
		return arr[0];
	}
	int restGCD=gcdofArray(arr+1,size-1);
	return gcd(arr[0],restGCD);
}
