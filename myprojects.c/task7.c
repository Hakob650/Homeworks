#include <stdio.h>
int main(){
    printf("enter the number");
    int a=0,f=1;
    scanf("%d",&a);
    if(a<0){
    printf("enter another number");
    }else{ 
     for(int i=1;i<=a;i++){
     f*=i;
    }printf("%d",f);
    return 0;
    }
}
