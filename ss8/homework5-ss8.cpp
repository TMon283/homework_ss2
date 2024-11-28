#include<stdio.h>
int main(){
	int a, b, sum = 0;
	printf("Ban muon mang co bao nhieu dong ");
	scanf("%d", &a);
	printf("Ban muon mang co bao nhieu cot ");
	scanf("%d", &b);
	int array[a][b];
	for(int i = 0; i < a; i++){
		for(int j = 0; j < b; j++){
			printf("Moi ban nhap gia tri vao vi tri %d, hang %d ", i+1, j+1);
			scanf("%d", &array[i][j]);
			if(j == 0 or j == b-1){
				sum += array[i][j];
			}
		}
	}
	printf("Tong cua cac phan tu tren duong bien la %d\n", sum);
	return 0;
}
