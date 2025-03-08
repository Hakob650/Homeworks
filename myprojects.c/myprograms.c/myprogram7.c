#include <stdio.h>
int main(){
char letter;
printf("Enter a letter:");
scanf("%c",&letter);
letter=letter^0x20;
printf("Converted letter: %c\n",letter);
return 0;
}
