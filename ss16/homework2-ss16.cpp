#include<stdio.h>
void swap(int *index1, int *index2);
int main(){
	int num1 = 30;
	int num2 = 50;
	printf("Bien num1 truoc khi swap la %d\n", num1);
	printf("Bien num2 truoc khi swap la %d\n", num2);
	swap(&num1, &num2);
	printf("\n");
	printf("Bien num1 sau khi swap la %d\n", num1);
	printf("Bien num2 sau khi swap la %d\n", num2);
	return 0;
}
void swap(int *index1, int *index2){
	int temp = *index1;
	*index1 = *index2;
	*index2 = temp;
}
