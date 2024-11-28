#include<stdio.h>
int main(){
	int max = 0; 
	int array[3][2];
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 2; j++){
			printf("Moi ban nhap gia tri vao vi tri %d, hang %d ", i+1, j+1);
			scanf("%d", &array[i][j]);
			if(max <= array[i][j]){
				max = array[i][j];
			}
		}
	}
	printf("Phan tu lon nhat trong mang la %d\n", max);
	return 0;
}
