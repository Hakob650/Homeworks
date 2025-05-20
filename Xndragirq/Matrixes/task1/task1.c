#include <stdio.h>
int Func(int **matrix,int rows,int cols){
	int count=0;
	for(int i=0;i<rows;++i){
		int odd_count=0;
		for(int j=0;j<cols;++j){
			if(matrix[i][j]%2!=0){
				odd_count++;
			if(odd_count>=2){
				count++;
				break;
			}
		}
	}return count;
}
