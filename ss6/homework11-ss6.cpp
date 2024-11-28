#include<stdio.h>
int main(){
	int i = 2, number = 2, count = 0;
	printf("Moi ban nhap so nguyen ");
	scanf("%d", &i);
	while(count != i){
		for(i = 2; i <= number - 1; i++){
			if(number % i != 0){
				printf("%d ", number);
				number++;
			}
		}
	}
	return 0;
}
