#include<stdio.h>
int main(){
	int a, sum = 0, array[a][a];
	printf("Moi ban nhap so hang, so cot cho mang hinh vuong ");
	scanf("%d", &a);
	for(int i = 0; i < a; i++){
		for(int j = 0; j < a; j++){
			printf("Moi ban nhap gia tri vao vi tri %d, hang %d ", i+1, j+1);
			scanf("%d", &array[i][j]);
			if(j + i == a - 1){
				sum += array[i][j];
			}
		}
	}
	printf("Tong cac phan tu tren duong cheo phu la %d\n", sum);
	return 0;
}
