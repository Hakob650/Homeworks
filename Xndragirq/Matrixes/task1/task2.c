#include <stdio.h>
int Func(int **matrix,int rows,int cols){
	int count=0;
	for(int i=0;i<rows;++i){
		int first=matrix[i][0];
		if(first==0){
			continue;
		}
		int div=1;
		for(int j=1;j<cols;++j){
			if(matrix[i][j]%first!=0){
				div=0;
				break;
			}
		}
		if(div){
			count++;
		}
	}
		return count
}
