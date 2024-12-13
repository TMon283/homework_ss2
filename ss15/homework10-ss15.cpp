#include<stdio.h>
#include<string.h>
int findIndex(char letter, char letters[]);
int main(){
	char string[] = "hello world";
	int length = (int)strlen(string);
	char letters[length];
	int times[length];
	int count = 0;
	for(int i = 0; i < length; i++){
		if(findIndex(string[i], letters) == -1){
			letters[count] = string[i];
			times[count] = 1;
			count++;
		}else{
			int index = findIndex(string[i], letters);
			times[index]++;
		}
	}
	for(int i = 0; i < count; i++){
		printf("%c - %d\n", letters[i], times[i]);
	}
	return 0;
}
int findIndex(char letter, char letters[]){
	int length = (int)strlen(letters);
	for(int i = 0; i < length; i++){
		if(letter == letters[i]){
			return i;
		}
	}
	return -1;
}
