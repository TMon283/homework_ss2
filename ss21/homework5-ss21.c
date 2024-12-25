#include<stdio.h>
int main(){
	char string[50];
	int col;
	FILE *fptr;
	fptr = fopen("bt05.txt", "w");
	printf("So dong ban muon nhap la: ");
	scanf("%d", &col);
	getchar();
	for(int i = 0; i < col; i++){
		printf("Moi ban nhap noi dung dong %d ", i + 1);
		fgets(string, sizeof(string), stdin);
		fputs(string, fptr);
	}
	fclose(fptr);
	fptr = fopen("bt05.txt", "r");
	printf("Noi dung tung dong trong file la:\n");
	for(int i = 0; i < col; i++){
		fgets(string, 50, fptr);
		printf("Dong %d trong file la: %s", i + 1, string);
	}
	fclose(fptr);
	return 0;
}

