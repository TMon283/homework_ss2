#include<stdio.h>
int calculateSum(int numA, int numB){
	int result = numA + numB;
}
int main(){
	int num1, num2, sum;
	printf("Nhap gia tri so thu nhat: ");
	scanf("%d", &num1);
	printf("Nhap gia tri so thu hai: ");
	scanf("%d", &num2);
	sum = calculateSum(num1, num2);
	printf("Tong 2 so la %d\n", sum);
	return 0;
}
