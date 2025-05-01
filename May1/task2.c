#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    char *str;
    int length;
    printf("enter string length");
    scanf("%d",&length);
    str=(char*)malloc((length+1)*sizeof(char));
    if(str==NULL){
        printf("error in allocating\n");
        return 1;
    }
    getchar();
    printf("enter string");
    fgets(str,length+1,stdin);
    printf("string %s\n",str);
    printf("actual length of string %lu\n",strlen(str));
    free(str);
    return 0;
}

