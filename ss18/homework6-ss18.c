#include<stdio.h>
int main(){
	int length = 5;
	struct Student{
		int id;
		char name[50];
		int age;
		char phoneNumber[15];
	};
	struct Student st[50] = {
		{1, "Hoang Thai Minh", 18, "0332375399"},
		{2, "Nguyen Thi Kim Le", 21, "0332375399"},
		{3, "Nguyen Khac Hung", 18, "0332375399"},
		{4, "Ha Bich Ngoc", 18, "0332375399"},
		{5, "Ho Khanh Linh", 18, "0332375399"}
	};
	for(int i = 0; i < length; i++){
		printf("ID: %d\n", st[i].id);
		printf("Ten: %s\n", st[i].name);
		printf("Tuoi: %d\n", st[i].age);
		printf("So dien thoai: %s", st[i].phoneNumber);
		printf("\n");
	}
	length++;
	printf("\nMoi ban nhap ten sinh vien muon them: ");
	fgets(st[length - 1].name, sizeof(st[length - 1].name), stdin);
	int len = (int)strlen(st[length - 1].name);
	st[length - 1].name[len - 1] = '\0';
	printf("Moi ban nhap tuoi: ");
	scanf("%d", &st[length - 1].age);
	fflush(stdin);
	printf("Moi ban nhap so dien thoai: ");
	fgets(st[length - 1].phoneNumber, sizeof(st[length - 1].phoneNumber), stdin);
	fflush(stdin);
	printf("Danh sach sinh vien sau khi them la\n");
	for(int i = 0; i < length; i++){
		printf("ID: %d\n", st[i].id);
		printf("Ten: %s\n", st[i].name);
		printf("Tuoi: %d\n", st[i].age);
		printf("So dien thoai: %s", st[i].phoneNumber);
		printf("\n");
	}
	return 0;
}

