













#include <stdio.h>
#include <stdlib.h>
char* DecToBinary(int num);
int main(){
  int num;
  printf("Enter a number: ");
  scanf("%d",&num);
  char *binary=DecToBinary(num);
  if(binary){
    printf("Binary: %s\n",binary);
    free(binary);
  }else{
    printf("Memory allocation failed");
  }
  return 0;
}
