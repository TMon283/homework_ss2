#include<stdio.h>
int main(){
	char string[50];
	FILE *fptr;
	fptr = fopen("bt01.txt", "a");
	printf("Moi ban nhap them chuoi vao file: ");
	fgets(string, sizeof(string), stdin);
	fputs(string, fptr);
	fclose(fptr);
	printf("Nhap them thanh cong");
	return 0;
}

