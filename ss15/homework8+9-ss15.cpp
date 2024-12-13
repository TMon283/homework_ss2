#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
	int i, j;
	char deleteIndex;
	char string[100]; 
	printf("Nhap chuoi bat ki: ");
	fgets(string, sizeof(string), stdin);
	printf("Moi ban nhap ki tu muon xoa: ");
	scanf("%c", &deleteIndex);
	for(i = 0, j = 0; i < strlen(string); i++){
		if(string[i] != deleteIndex){
			string[j++] = string[i];
		}
	}
	string[j] = '\0';
	for(i = 0; i < strlen(string) - 1; i++){
		string[0] = toupper(string[0]);
		if(string[i] == ' '){
			string[i + 1] = toupper(string[i + 1]);
		}
	}
	for(i = 0; i < strlen(string) - 1; i++){
		printf("%c", string[i]);
	}
	return 0;
}
