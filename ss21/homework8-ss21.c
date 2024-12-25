#include<stdio.h>
struct Student{
	int id;
	char name[50];
	int age;
};
int main(){
	char student[100];
	struct Student st[100];
	FILE *fptr;
	fptr = fopen("student.txt", "r");
	if(fptr == NULL){
		printf("Loi mo tep tin");
		return 1;
	}
	int i = 0;
	while(fscanf(fptr, "%d %s %d", &st[i].id, st[i].name, &st[i].age) != EOF){
		i++;
	}
	fclose(fptr);
	printf("Danh sach sinh vien\n");
	for(int j = 0; j < i; j++){
		printf("ID: %d Name: %s Age: %d\n", st[j].id, st[j].name, st[j].age);
	}
	return 0;
}

