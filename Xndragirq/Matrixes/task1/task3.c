#include <stdio.h>
int isPerfect(int num){
	if(n<2){
		return 0;
	}
	int sum=1;
	for(int i=2;i<num/2;++i){
		if(num%i==0){
			sum+=i;
		}
	}
	return sum;
}
int Func(int **matrix,int rows,int cols){
	int count=0;
	for(int i=0;i<rows;++i){
		int a=0;
		for(int j=0;j<cols;++j){
			if(isPerfect(matrix[i][j])){
				a=1;
				break;
			}
		}
		if(a){
			count++;
		}
	}return count;
}


