#include<stdio.h>
int main(){
	int length = 5;
	int deleteIndex;
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
	printf("\nMoi ban nhap ID sinh vien muon xoa: ");
	scanf("%d", &deleteIndex);
	if(deleteIndex < 0 && deleteIndex >= length){
		printf("Khong tim thay\n");
	}else{
		for(int i = deleteIndex - 1; i < length - 1; i++){
			st[i] = st[i + 1];
		}
		length--;
	}
	for(int i = 0; i < length; i++){
		st[i].id = i + 1;
	}
	printf("\nDanh sach sinh vien sau khi xoa la\n");
	for(int i = 0; i < length; i++){
		printf("ID: %d\n", st[i].id);
		printf("Ten: %s\n", st[i].name);
		printf("Tuoi: %d\n", st[i].age);
		printf("So dien thoai: %s", st[i].phoneNumber);
		printf("\n");
	}
	return 0;
}

