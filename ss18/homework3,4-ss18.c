#include<stdio.h>
int main(){
	struct Student{
		char name[50];
		int age;
		char phoneNumber[10];
	};
	struct Student st[50];
	for(int i = 0; i < 5; i++){
		printf("ID: %d\n", i + 1);
		printf("Moi ban nhap ten: ");
		fgets(st[i].name, sizeof(st[i].name), stdin);
		int len = (int)strlen(st[i].name);
		st[i].name[len - 1] = '\0';
		printf("Moi ban nhap tuoi: ");
		scanf("%d", &st[i].age);
		fflush(stdin);
		printf("Moi ban nhap so dien thoai: ");
		fgets(st[i].phoneNumber, sizeof(st[i].phoneNumber), stdin);
		fflush(stdin);
	}
	for(int i = 0; i < 5; i++){
		printf("ID: %d\n", i + 1);
		printf("Ten: %s\n", st[i].name);
		printf("Tuoi: %d\n", st[i].age);
		printf("So dien thoai: %s", st[i].phoneNumber);
		printf("\n");
	}
	return 0;
}

