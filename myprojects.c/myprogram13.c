#include <stdio.h>
int main(){
char lowercase,uppercase;
printf("Enter a letter");
scanf(" %c ",lowercase);
uppercase=lowercase&0xDF;
printf("%c",uppercase);
return 0;
}
