#include<stdio.h>
int primeNumber(int number){
	if(number <= 1){
		return 0;
	}
	for(int i = 2; i < number; i++){
		if(number % i == 0){
			return 0;
		}
	}
	return 1;
}
int main(){
	int num1, num2;
	printf("Nhap so nguyen thu nhat: ");
	scanf("%d", &num1);
	printf("Nhap so nguyen thu hai: ");
	scanf("%d", &num2);
	if(primeNumber(num1)){
		printf("So %d la so nguyen to\n", num1);
	}else{
		printf("So %d khong phai so nguyen to\n", num1);
	}
	if(primeNumber(num2)){
		printf("So %d la so nguyen to\n", num2);
	}else{
		printf("So %d khong phai so nguyen to\n", num2);
	}
	return 0;
}
