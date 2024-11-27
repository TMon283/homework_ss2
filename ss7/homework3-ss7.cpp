#include<stdio.h>
int main(){
	int i, chan = 0;
	int numbers[5];
	for(i = 0; i <= 4; i++){
		printf("Nhap gia tri vao mang ");
		scanf("%d", &numbers[i]);
	}
	printf("\nCac phan tu la so chan trong mang la: ");
	for(i = 0; i <= 4; i++){
		if(numbers[i] % 2 == 0){
			printf("%d ", numbers[i]);
			chan++;
		}
	}
	if(chan == 0){
		printf("[]");
	}
	return 0;
}
