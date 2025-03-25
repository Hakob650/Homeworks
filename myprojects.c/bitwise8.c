#include <stdio.h>
int main(){
	char letter=0;
	printf("enter letter ");
	scanf("%c",&letter);
	letter=letter^32;
	printf("converted: %c\n",letter);
	return 0;
}
