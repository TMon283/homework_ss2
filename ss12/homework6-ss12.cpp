#include<stdio.h>
int perfectNumber(int number){
	int sum;
	for(int i = 1; i <= number/2; i++){
		if(number % i == 0){
			sum += i;
		}
	}
	if(sum == number){
		return 1;
	}else{
		return 0;
	}
}
int main(){
	int num1, num2;
	printf("Nhap so nguyen thu nhat: ");
	scanf("%d", &num1);
	printf("Nhap so nguyen thu hai: ");
	scanf("%d", &num2);
	if(perfectNumber(num1)){
		printf("So %d la so hoan hao\n", num1);
	}else{
		printf("So %d khong phai so hoan hao\n", num1);
	}
	if(perfectNumber(num2)){
		printf("So %d la so hoan hao\n", num2);
	}else{
		printf("So %d khong phai so hoan hao\n", num2);
	}
	return 0;
}
