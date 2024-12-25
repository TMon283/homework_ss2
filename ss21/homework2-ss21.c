#include<stdio.h>
int main(){
	FILE *fptr;
	fptr = fopen("bt01.txt", "r");
	int c = fgetc(fptr);
	printf("ki tu dau tien la: %c\n", c);
	fclose(fptr);
	return 0;
}

