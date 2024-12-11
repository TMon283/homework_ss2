#include<stdio.h>
#include<string.h>
int main(){
	char string[50];
	printf("Moi ban nhap chuoi ki tu bat ki: ");
	gets(string);
	printf("%s", string);
	printf("\nDo dai chuoi vua nhap la %d", strlen(string));
	return 0;
}
