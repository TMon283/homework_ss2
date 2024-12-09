#include<stdio.h>
int findMax(int length, int arr[]){
	int max = arr[0];
	for(int i = 0; i < length; i++){
		if(arr[i] > max){
			max = arr[i];
		}
	}
	return max;
}
int main(){
	int arr[50], length, max;
	printf("Moi ban nhap so luong phan tu trong mang: ");
	scanf("%d", &length);
	for(int i = 0; i < length; i++){
		printf("Nhap arr[%d]: ", i);
		scanf("%d", &arr[i]);
	}
	max = findMax(length, arr);
	printf("Gia tri lon nhat trong mang la %d", max);
	return 0;
}
