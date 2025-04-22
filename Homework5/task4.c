#include <stdio.h>

int main() {
    int a, b, c, count = 0;
    printf("Enter the value of a: ");
    scanf("%d", &a);
     printf("Enter the value of b: ");
    scanf("%d", &b);
    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }
    c = a; 
    do {
        if (c % 5 == 0) {
            printf("%d ", c);
            count++;
	}
        c++;
    } while (c <= b);  
     printf(" count: %d\n", count);
     return 0;
    }

			
	

