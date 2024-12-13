#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
	char deleteIndex;
	char string[100]; 
	printf("Nhap chuoi bat ki: ");
	fgets(string, sizeof(string), stdin);
	printf("Moi ban nhap ki tu muon xoa: ");
	scanf("%c", &deleteIndex);
	long a = strchr(string, deleteIndex) - &string[0];
	for(int i = a; i < strlen(string); i++){
		string[i] = string[i + 1];
	}
	for(int i = 0; i < strlen(string) - 1; i++){
		string[0] = toupper(string[0]);
		if(string[i] == ' '){
			string[i + 1] = toupper(string[i + 1]);
		}
	}
	for(int i = 0; i < strlen(string) - 1; i++){
		printf("%c", string[i]);
	}
	return 0;
}
