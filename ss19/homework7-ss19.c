#include<stdio.h>
#include<string.h>
struct Student{
	int id;
	char name[50];
	int age;
	char phoneNumber[15];
	};
void deleteStudent(int id, struct Student st[], int *length);
int main(){
	int length = 5;
	int deleteIndex;
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
	deleteStudent(deleteIndex, st, &length);
	for(int i = 0; i < length; i++){ //Cap nhat lai id sau khi xoa phan tu khoi mang
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
void deleteStudent(int id, struct Student st[], int *length){
	int found = 0;
    for (int i = 0; i < *length; i++){
        if (st[i].id == id){
            found = 1;
            for (int j = i; j < *length; j++){
                st[j] = st[j + 1];
            }
            (*length)--;
        }
    }
}

