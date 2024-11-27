#include<stdio.h>
int main(){
	int i;
	int numbers[5];
	for(i = 0; i <= 4; i++){
		printf("Nhap gia tri vao mang ");
		scanf("%d", &numbers[i]);
	}
	printf("\nMang moi la [");
	for(i = 0; i <= 3; i++){
		if(numbers[i] % 2 == 0){
			numbers[i] += 3;
		} else{
			numbers[i] += 2;
		}
		printf("%d, ", numbers[i]);
	}
		if(numbers[4] % 2 == 0){
			numbers[4] += 3;
		} else{
			numbers[4] += 2;
		}
		printf("%d", numbers[4]);
	printf("]");
	return 0;
}
