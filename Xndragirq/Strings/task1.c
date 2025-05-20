#include <stdio.h>
void CompressString(const char *str){
	char prev='\0';
	int count=0;
	for(int i=0;str[i]!='\0';++i){
		if(prev=='\0'){
			prev=str[i];
			count=1;
		}else if(str[i]==prev){
			count++;
		}else{
			printf("%c%d",prev,count);
			prev=str[i];
			count=1;
		}
	}
	if(prev!='\0'){
		printf("%c%d\n",prev,count);
	}
}
int main(){
	const char *str="aaabbccccddd";
	CompressString(str);
	return 0;
}


