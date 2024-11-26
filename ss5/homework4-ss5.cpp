#include<stdio.h>
int main(){
	int number;
	int i;
	int tich;
	printf("Ban muon xem bang cuu chuong may ");
	scanf("%d", &number);
	for(i = 1; i <= 10; i++){
		tich = number * i;
		printf("%d * %d = %d\n", number, i, tich);
	}
	return 0;
}
