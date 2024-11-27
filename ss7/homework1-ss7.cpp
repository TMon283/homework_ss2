#include<stdio.h>
int main(){
	int i;
	int numbers[5]={1,3,5,6,8};
	for(i = 0; i <= 4; i++){
		printf("Phan tu %d trong mang la %d\n", i+1, numbers[i]);
	}
	printf("Do dai cua mang la %d\n", i);
	return 0;
}
