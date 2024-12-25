#include<stdio.h>
int main(){
	FILE *fptr;
	fptr = fopen("bt01.txt", "w");
	if(fptr == NULL){
		printf("Loi mo tap tin");
		return 1;
	}
	char string[50];
	printf("Moi ban nhap chuoi bat ki vao file: ");
	fgets(string, sizeof(string), stdin);
	fputs(string, fptr);
	fclose(fptr);
	printf("Nhap thanh cong vao file\n");
	fptr = fopen("bt01.txt", "r");
	int c = fgetc(fptr);
	printf("ki tu dau tien la: %c\n", c);
	fclose(fptr);
	return 0;
}

