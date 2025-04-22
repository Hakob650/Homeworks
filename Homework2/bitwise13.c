#include <stdio.h>
int main(){
	int num1=0,num2=0;
	char operator;
	printf("enter first number");
	scanf("%d",&num1);
	printf("enter second number");
	scanf("%d",&num2);
	printf("enter bitwise operator: &,|,^,~,>>,<<");
	scanf(" %c",&operator);
	int res=0;
	switch(operator){
		case '&':
		        res=num1&num2;
		        printf("res of %d&%d=%d\n",num1,num2,res);
			break;
		case '|':
		        res=num1|num2;
			printf("res of %d|%d=%d\n",num1,num2,res);
			break;
		case'^':
			res=num1^num2;
			printf("res of %d^%d=%d\n",num1,num2,res);
			break;
		case'~':
			res=~num1;
			printf("res of ~%d=%d\n",num1,res);
			break;
		case'>':
			res=num1>>num2;
			printf("res of %d>>%d=%d\n",num1,num2,res);
			break;
		case'<':
			res=num1<<num2;
			printf("res of %d<<%d=%d\n",num1,num2,res);
			break;
               default:
			printf("error! \n");

			break;
	      }return 0;
}	
