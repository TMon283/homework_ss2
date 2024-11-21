#include<stdio.h>
int main(){
	int abcd;
	printf("Moi ban nhap so nguyen ");
	scanf("%d", &abcd);
	int a = abcd / 1000;
	int b = abcd % 1000 / 100;
	int c = abcd % 100 / 10;
	int d = abcd % 10;
	int sum = a + b + c + d;
	printf("Tong cac chu so la %d\n", sum);
	return 0;
}
