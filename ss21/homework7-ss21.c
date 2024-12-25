#include<stdio.h>
struct Student{
	int id;
	char name[50];
	int age;
};
int main(){
	FILE *fptr;
	int length;
	struct Student st[100];
	
	fptr = fopen("student.txt", "w");
	if(fptr == NULL){
		printf("Loi mo tap tin\n");
		return 1;
	}
	
	printf("Moi ban nhap so luong sinh vien muon them: ");
	scanf("%d", &length);
	getchar();
	
	for(int i = 0; i < length; i++){
		printf("Nhap thong tin sinh vien %d\n", i + 1);
		
		printf("ID: ");
		scanf("%d", &st[i].id);
		getchar();
		
		printf("Moi ban nhap ten: ");
		fgets(st[i].name, sizeof(st[i].name), stdin);
		int len = (int)strlen(st[i].name);
		st[i].name[len - 1] = '\0';
		
		printf("Moi ban nhap tuoi: ");
		scanf("%d", &st[i].age);
		fflush(stdin);
		
		fprintf(fptr, "%d %s %d\n", st[i].id, st[i].name, st[i].age);
	}
	printf("Da luu du lieu cua sinh vien xong\n");
	fclose(fptr);
	return 0;
}

