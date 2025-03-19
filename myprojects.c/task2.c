#include <stdio.h>
int main(){
printf("loop for 0-10: \n");
int i=0;
do{
   printf("%d",i);
   i++;
}while(i>=0&&i<=10);

printf("loop 10-0: \n");
for(i=10;i>=0;i--){
printf("%d",i);
}return 0;
}
	
