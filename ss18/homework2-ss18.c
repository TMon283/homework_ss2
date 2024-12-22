#include<stdio.h>
int main(){
	struct Student{
		char name[50];
		int age;
		char phoneNumber[10];
	};
	struct Student st01;
	printf("Moi ban nhap ten: ");
	fgets(st01.name, sizeof(st01.name), stdin);
	printf("Moi ban nhap tuoi: ");
	scanf("%d", &st01.age);
	getchar();
	printf("Moi ban nhap so dien thoai: ");
	fgets(st01.phoneNumber, sizeof(st01.phoneNumber), stdin);
	printf("\n%s%d\n%s", st01.name, st01.age, st01.phoneNumber);
	return 0;
}

