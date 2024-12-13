#include<stdio.h>
#include<string.h>
int main(){
	char string1[100];
	char string2[] = "hello world";
	char character = 'r';
	char *position= strchr(string2, character);
	printf("Dia chi cua ki tu r trong chuoi string = %lu\n", (unsigned long)&string2[0]);
	return 0;
}
