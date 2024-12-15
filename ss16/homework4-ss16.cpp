#include<stdio.h>
#include<string.h>
void printArr(int *arrPtr);
int main(){
	int arr[6] = {10, 20, 30, 40, 50, 60};
	int *arrPtr = arr;
	printArr(arrPtr);
	return 0;
}
void printArr(int *arrPtr){
	for(int i = 0; i < 6; i++){
		printf("arr[%d] = %d\n", i, *(arrPtr + i));
	}
}
