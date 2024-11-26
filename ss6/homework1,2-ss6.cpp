#include<stdio.h>
int main(){
	int sum, number;
	int i = 0;
	int le = 0;
	int chan = 0;
	printf("Moi ban nhap 5 so nguyen\n");
	do{
		scanf("%d", &number);
		if(number % 2 == 1){
			sum += number;
			le ++;
		} else if(number % 2 == 0){
			chan ++;
		}
		i++;
	}while(i != 5);
	printf("Tong cac so le %d\n", sum);
	printf("So luong so le trong cac so da nhap la %d\n", le);
	printf("So luong so chan trong cac so da nhap la %d\n", chan);
	return 0;
}
