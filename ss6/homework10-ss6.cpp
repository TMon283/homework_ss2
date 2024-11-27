#include<stdio.h>
int main(){
	int i, number;
	printf("Moi ban nhap so nguyen ");
	scanf("%d", &number);
	for(i = 2; i < number; i++){
		if(number % i == 0){
			printf("So %d khong la so nguyen to\n", number);
			break;
		} else{
			printf("So %d la so nguyen to\n", number);
			break;
		}
	}
	return 0;
}
