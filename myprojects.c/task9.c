#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int original_num = num;
    if (num < 0) {
        num = -num;
    }if (num == 0) {
      printf("0/n");
    } else {
        int digits1, i = 0;
       while (num != 0) {
          digits1 = num % 10;
          num/= 10;
          i++;
        } for (int j = i - 1; j >= 0; j--) {
            printf("%d ", digits2);
        }
        } return 0;
        }
 
