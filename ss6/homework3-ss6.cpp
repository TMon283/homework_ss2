#include<stdio.h>
int main(){
	int password = 28;
	int number;
	while (number != password){
		printf("Moi ban nhap password ");
		scanf("%d", &number);
		if (number != password){
			printf("Mat khau sai\n");
		}
	}
	printf("Mat khau dung\n");
	return 0;
}
