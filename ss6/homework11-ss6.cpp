#include<stdio.h>
int main(){
	int sls, i, number = 2, count = 0;
	printf("Moi ban nhap so nguyen ");
	scanf("%d", &sls);
	do{
		for(i = 1; i <= number; i++){
			if(number % i != 0){
				printf("%d\n", number);
				count ++;
			} else{
				number++;
			}
		}
	} while(count != sls);
	return 0;
}
