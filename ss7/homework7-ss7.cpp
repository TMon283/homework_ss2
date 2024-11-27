#include<stdio.h>
int main(){
	int a, i;
	printf("Moi ban nhap so phan tu cua mang ");
	scanf("%d", &a);
	int numbers[a];
	for(i = 0; i <= a - 1; i){
		printf("Nhap gia tri cho phan tu %d: ", i + 1);
		scanf("%d", &numbers[i]);
		if(numbers[i] % 2 == 0){
			printf("Moi ban nhap lai\n");
		} else{
			i++;
		}
	}
	
	return 0;
}
