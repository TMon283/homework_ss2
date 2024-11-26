#include<stdio.h>
int main(){
	int num = 1;
	int i;
	int tich;
	for (i = 1; i <= 10; i++){
		tich = num * i;
		printf("%d * %d = %d\n", num, i, tich);
		if (i == 10 and num < 9){
			printf("\n");
			i = 0;
			num++;
		}
	}
	return 0;
}
