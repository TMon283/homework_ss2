#include<stdio.h>
int giaiThua(int n){
	if(n == 0){
		return 1;
	}else{
		return n * (n - 1);
	}
}
int main(){
	int result, value = 1, numberIndex;
	printf("Nhap so nguyen bat ki: ");
	scanf("%d", &numberIndex);
	result = giaiThua(numberIndex);
	printf("Giai thua cua %d la %d", numberIndex, result);
	return 0;
}
