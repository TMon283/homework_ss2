#include<stdio.h>
int main(){
	int i;
	int n;
	int sum = 0;
	printf("Moi ban nhap so nguyen duong ");
	scanf("%d", &n);
	if (n <= 0){
		printf("Nhap sai roi ban oi");
	}
	for(i = 0; i <= n; i++){
		sum += i;
	}
	printf("Tong tat ca cac so tu 1 den %d la %d", n, sum);
	return 0;
}
