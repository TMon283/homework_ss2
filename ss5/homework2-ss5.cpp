#include<stdio.h>
int main(){
	int number = 28;
	int i;
	do{
		printf("Nhap so ");
		scanf("%d", &i);
	} while (number != i);
	printf("Chuc mung ban da nhap chinh xac so can tim");
	return 0;
}
