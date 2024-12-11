#include<stdio.h>
int main(){
	int count = 1;
    char string[100];
    printf("Nhap chuoi bat ki: ");
    fgets(string, sizeof(string), stdin);
    for (int i = 0; string[i] != '\0'; i++) {
        if (string[i] == ' '){
            count++;
        }
    }
    printf("So tu trong chuoi la: %d\n", count);
	return 0;
}
