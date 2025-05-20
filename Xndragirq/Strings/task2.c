#include <stdio.h>
int Func(char *str,char *words[],int max_words){
	int count=0;
	char *start=str;
	while(*start!='\0'){
		while(*start==' '){
			start++;
		}
		if(*start=='\0'){
			break;
		}
	
		words[count++]=start;
		if(count>=max_words){
			return count;
		}	
		while(*start!=' ' && *start!='\0'){
			start++;
		}
		if(*start!='\0'){
			*start='\0';
			start++;
		}
	}
	return count;
}
int main(){
	char str[]="I am a student of Picsart Academy";
	char *words[20];
	int res=Func(str,words,20);
	for(int i=0;i<res;++i){
		printf("%s\n",words[i]);
	}
	return 0;
}
