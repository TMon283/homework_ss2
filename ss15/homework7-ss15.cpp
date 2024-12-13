#include <stdio.h>
#include<string.h>
char string[50];
void countCharacter();
int main() {
    printf("Nhap chuoi bat ki: ");
    fgets(string, sizeof(string), stdin);
    countCharacter();
    return 0;
}
void countCharacter(){
	int countWord = 0, countNumber = 0, countChar = 0;
	for(int i = 0; i < strlen(string) - 1; i++) {
        if ((string[i] >= 'A' && string[i] <= 'Z') || (string[i] >= 'a' && string[i] <= 'z')){
            countWord++;
        }else if(string[i] >= '0' && string[i] <= '9'){
        	countNumber++;
		}else{
			countChar++;
		}
    }
    printf("So ki tu la chu cai trong chuoi la: %d\n", countWord);
    printf("So ki tu la chu so trong chuoi la: %d\n", countNumber);
    printf("So ki tu la ki tu dac biet trong chuoi la: %d\n", countChar);
}
void reverseString(){
	for(int i = 0; i < strlen(string); i++){
		string[i] = string[strlen(string) - i];
	}
	for(int i = 0; i < strlen(string) - 1; i++){
		printf("%c", string[i]);
	}
}
