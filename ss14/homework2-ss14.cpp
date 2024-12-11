#include<stdio.h>
int main(){
	char string[] = "hello rikkei";
	int length = sizeof(string)/sizeof(char);
	for(int i = 0; i < length - 1; i++){
		printf("%c ", string[i]);
	} 
	return 0;
}
