#include<stdio.h>
int main(){
	int a, i;
	printf("Moi ban nhap so phan tu cua mang ");
	scanf("%d", &a);
	int numbers[a];
	for(i = 0; i <= a - 1; i++){
		printf("Nhap gia tri vao mang ");
		scanf("%d", &numbers[i]);
	}
	printf("\nMang ban vua nhap la [");
	for(i = 0; i <= a - 2; i++){
		printf("%d, ", numbers[i]);
	}
	printf("%d]", numbers[a -1]);
	return 0;
}
