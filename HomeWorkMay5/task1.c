#include <stdio.h>
#include <stdlib.h>
char* DecToBinary(int n){
  unsigned int num=(n<0) ? -n:n;
  int bits=0;
  unsigned int tmp=num;
  do{
    tmp/=2;
    bits++;
  }while(tmp>0);
  int total=bits+((n<0) ? 1:0)+1;
  char* binary=(char*)malloc(total+sizeof(char));
  if(!binary){
    return NULL;
  }
  binary[total-1]='\0';
  int i=total-2;
  do{
    binary[i--]=(num%2)+'0';
    num/=2;
  }while(num>0);
  if(n<0){
    binary[0]='-';
  }
  return binary;
}
