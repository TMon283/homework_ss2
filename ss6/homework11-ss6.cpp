#include<stdio.h>
int main(){
	int i = 2, number, temp = 2;
	printf("Moi ban nhap so nguyen ");
	scanf("%d", &number);
	do{
		if(number % i == 0){
			i++;
		}else{
			temp = number;
			printf("%d\n", temp);
			number = number + 1;
			i = 2;
		}
		
	}while(temp >= number);
	return 0;
}
