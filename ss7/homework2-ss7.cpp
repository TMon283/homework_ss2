#include<stdio.h>
int main(){
	int i;
	int numbers[5];
	for(i = 0; i <= 4; i++){
		printf("Nhap gia tri vao mang ");
		scanf("%d", &numbers[i]);
	}
	printf("\nMang ban vua nhap la [");
	for(i = 0; i <= 3; i++){
		printf("%d, ", numbers[i]);
	}
	printf("%d]", numbers[4]);
	return 0;
}
