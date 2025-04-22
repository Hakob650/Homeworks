#include <stdio.h>

int main() {
    int num, reversed = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    int original_num = num;
    for (; num != 0; num /= 10) {
        int digit = num % 10; 
        reversed = reversed * 10 + digit;
    } printf("Reversed number: %d\n", reversed);
     return 0;
}


