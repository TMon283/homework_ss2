#include <stdio.h>
int main() {
	int count = 0;
    char string[100];
    printf("Nhap chuoi bat ki: ");
    fgets(string, sizeof(string), stdin);
    for (int i = 0; string[i] != '\0'; i++) {
        if ((string[i] >= 'A' && string[i] <= 'Z') || (string[i] >= 'a' && string[i] <= 'z')){
            count++;
        }
    }
    printf("So ki tu la chu cai trong chuoi la: %d\n", count);
    return 0;
}


