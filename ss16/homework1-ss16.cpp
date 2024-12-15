#include<stdio.h>
int main(){
	int input = 3;
	int *ptr1 = &input;
	printf("Dia chi cua bien input la: %d\n", &input);
	printf("Dia chi cua bien input duoc luu tru trong ptr1 la: %d\n", ptr1);
	printf("Gia tri cua bien la: %d\n", input);
	printf("Gia tri con tro dang tham chieu toi la: %d\n", *ptr1);
	return 0;
}
