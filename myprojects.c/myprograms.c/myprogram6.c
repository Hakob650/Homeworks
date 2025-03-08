#include <stdio.h>
int main(){
char letter;
printf("enter a letter:");
scanf("%c",&letter);
letter=letter|0x20;
printf("converted letter: %c\n:",letter);
return 0;
}
