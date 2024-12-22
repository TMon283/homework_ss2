#include<stdio.h>
int main(){
	struct Student{
		char name[50];
		int age;
		char phoneNumber[10];
	};
	struct Student st1 = {"Hoang Thai Minh", 18, "0332375399"};
	printf("%s\n%d\n%s", st1.name, st1.age, st1.phoneNumber);
	return 0;
}

