#include <stdio.h>
int main(){
	int i=0;
	printf("loop 0-10: \n");
	while(i<=10){
		printf("%d",i);
		i++;
	}printf("loop 10-0: \n");
       i=10;
       do{
	printf("%d",i);
        i--;
       }while(i>=0);
       return 0;
}       
