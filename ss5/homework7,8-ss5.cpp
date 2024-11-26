#include<stdio.h>
int main(){
	int num1, num2, i, ucln, bcnn;
	printf("Moi ban nhap so thu nhat ");
	scanf("%d", &num1);
	printf("Moi ban nhap so thu hai ");
	scanf("%d", &num2);
	int a = num1;
	int b = num2;
	do{
		if(num1 > num2){
			i = num1 - num2;
			num1 = i;
		} else if(num2 > num1){
			i = num2 - num1;
			num2 = i;
		}
	}while(num1 != num2);
	ucln = num1;
	bcnn = a * b / ucln;
	printf("UCLN cua hai so %d va %d la %d\n", a, b, ucln);
	printf("BCNN cua hai so %d va %d la %d\n", a, b, bcnn);
	return 0;
}
