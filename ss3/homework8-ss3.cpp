#include<stdio.h>
int main(){
	int abcd;
	printf("Moi ban nhap so nguyen de dao nguoc ");
	scanf("%d", &abcd);
	int a = abcd / 1000;
	int b = abcd % 1000 / 100;
	int c = abcd % 100 / 10;
	int d = abcd % 10;
	int dcba = d * 1000 + c * 100 + b * 10 + a;
	printf("So can tim la %d\n", dcba);
	return 0;
}
