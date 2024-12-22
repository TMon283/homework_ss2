#include<stdio.h>
int main(){
	int index;
	struct Student{
		int id;
		char name[50];
		int age;
		char phoneNumber[10];
	};
	struct Student st[50] = {
		{1, "Hoang Thai Minh", 18, "0332375399"},
		{2, "Nguyen Thi Kim Le", 21, "0332375399"},
		{3, "Nguyen Khac Hung", 18, "0332375399"},
		{4, "Ha Bich Ngoc", 18, "0332375399"},
		{5, "Ho Khanh Linh", 18, "0332375399"}
	};
	printf("Nhap ID sinh vien ban muon tim: ");
	scanf("%d", &index);
	getchar();
	if(index < 1 || index > 5){
		printf("Khong tim thay");
		return 0;
	}
	for(int i = 0; i < 5; i++){
		if(index == st[i].id){
			printf("Moi ban nhap ten: ");
			fgets(st[i].name, sizeof(st[i].name), stdin);
			int len = (int)strlen(st[i].name);
			st[i].name[len - 1] = '\0';
			printf("Moi ban nhap tuoi: ");
			scanf("%d", &st[i].age);
			fflush(stdin);
		}
	}
	for(int i = 0; i < 5; i++){
		printf("ID: %d\n", st[i].id);
		printf("Ten: %s\n", st[i].name);
		printf("Tuoi: %d\n", st[i].age);
		printf("So dien thoai: %s", st[i].phoneNumber);
		printf("\n");
	}
	return 0;
}

