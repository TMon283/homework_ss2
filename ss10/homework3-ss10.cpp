#include<stdio.h>
int main(){
	int arr[] = {15, 6, 9, 2, 5};
	int n = sizeof(arr)/sizeof(arr[0]);
	int i, j;
	int key;
	for(int i = 1; i < n; i++){
		key = arr[i];
		j = i - 1;
		while(j >= 0 and arr[j]>key){
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = key;
	}
	printf("Mang da sap xep la: \n");
	for(int i = 0; i < n; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
	return 0;
}
