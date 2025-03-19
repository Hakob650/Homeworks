#include <stdio.h>

int main() {
    int num, reversed = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    int original_num = num;
    if (num < 0) {
        num = -num;
    } for (; num != 0; num /= 10) {
        int digit = num % 10;  // Get the last digit
        reversed = reversed * 10 + digit;
    } if (original_num < 0) {
        reversed = -reversed;
    }
    printf("Reversed number: %d\n", reversed);
     return 0;
}


