#include<stdio.h>
void sum(int num1, int num2, int *result);
int main(){
	int num1, num2, result;
	printf("Nhap gia tri so thu nhat: ");
	scanf("%d", &num1);
	printf("Nhap gia tri so thu hai: ");
	scanf("%d", &num2);
	sum(num1, num2, &result);
	printf("Tong cua %d va %d la %d", num1, num2, result);
	return 0;
}
void sum(int num1, int num2, int *result){
	*result = num1 + num2;
}
