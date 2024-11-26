#include<stdio.h>
int main(){
	int i, number;
	printf("Moi ban nhap so nguyen ");
	scanf("%d", &number);
	for(i = 2; i < number; i++){
		if(number % i == 0){
			printf("Uoc cua so da nhap la %d\n", i);
		}
	}
	return 0;
}
