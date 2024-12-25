#include<stdio.h>
int main(){
	FILE *fptr;
	fptr = fopen("bt01.txt", "r");
	char string[50];
	fgets(string, 100, fptr);
	printf("Dong dau tien trong file la: %s", string);
	fclose(fptr);
	return 0;
}

