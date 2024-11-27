#include<stdio.h>
int main(){
	int i, sls, num1 = 1, num2 = 1, num3;
	printf("Ban muon in bao nhieu so trong day fibonaci ");
	scanf("%d", &sls);
	for (i = 1; i <= sls; i++){
		printf("%d ", num1);
		num3 = num1 + num2;
		num1 = num2;
		num2 = num3;
	}
	printf("\n");
	return 0;
}
