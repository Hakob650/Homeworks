#include <stdio.h>
int main(){
char letter;
printf("Enter a letter:");
scanf("%c",&letter); 
letter=letter&0xDF;
printf("converted letter: %c\n",letter);
return 0;
}
