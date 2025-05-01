#include <stdio.h>
#include <stdlib.h>
int main(){
	int rows;
	int cols;
	printf("enter count of rows ");
	scanf("%d", &rows);
	printf("enter count of cols ");
	scanf("%d", &cols);
	int** matrix = (int**)malloc(cols*sizeof(int*));
	for(int i=0;i<rows;++i){
		matrix[i]=(int*)malloc(rows*sizeof(int));
	}
	printf("enter matrix elements: \n");
	for(int i=0;i<rows;++i){
		for(int j=0;j<cols;++j){
			scanf("%d", &matrix[i][j]);
		}
	}
	printf("\n");
	for(int i=0 ;i<rows;++i){
		for(int j=0;j<cols;++j){
			printf("%d",matrix[i][j]);
		}
		printf("\n");
	}	
	for(int i=0;i<rows;++i){
        free(matrix[i]);
    }free(matrix);
}
