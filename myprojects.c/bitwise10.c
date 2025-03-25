#include <stdio.h>

int main() {
    int number,n;
    printf("enter number");
    scanf("%d",&number);
    printf("enter power of 2");
    scanf("%d",&n);
    int m=number<<n;  
    int d=number>>n;
    printf(" multiplied: %d  %d\n", n, m);
    printf("divided: %d  %d\n", n, d);
    return 0;
}

