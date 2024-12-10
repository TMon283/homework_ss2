#include<stdio.h>
int arr[100][100];
int row, col;
void printArr();
int main(){
	printf("Nhap so hang cho mang: ");
	scanf("%d", &row);
	printf("Nhap so cot cho mang: ");
	scanf("%d", &col);
	printArr();
	return 0;
}
void printArr(){	
	for(int i = 0; i < row; i++){
		for(int j = 0; j < col; j++){
			printf("arr[%d][%d]: ", i, j);
			scanf("%d", &arr[i][j]);
		}
	}
	printf("Mang da tao la:\n\n");
	for(int i = 0; i < row; i++){
		for(int j = 0; j < col; j++){
			printf("\t%d", arr[i][j]);
		}
		printf("\n");
	}
}
