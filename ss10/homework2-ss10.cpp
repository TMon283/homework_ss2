#include<stdio.h>
int main(){
	int arr[] = {36, 15, 13, 26, 17};
	int n = sizeof(arr)/sizeof(arr[0]);
	for(int i = 0; i < n - 1; i++){
		for(int j = 0; j < n - 1 - i; j++){
			if(arr[j] > arr[j + 1]){
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	printf("Mang sau khi sap xep la: \n");
	for(int i = 0; i < n; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
	return 0;
}
