#include<stdio.h>
int main(){
	int character, count = 0;
	char string[] = "hello rikkei education";
	printf("Nhap ki tu bat ki: ");
	scanf("%c", &character);
	int length = sizeof(string)/sizeof(char);
	for(int i = 0; i < length - 1; i++){
		if(character == string[i]){
			count++;
		}
	}
	if(count != 0){
		printf("So lan xuat hien trong mang cua ki tu la %d\n", count);
	}else{
		printf("Ki tu ban nhap khong xuat hien trong mang");
	}
	return 0;
}
