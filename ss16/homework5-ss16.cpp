#include<stdio.h>
#include<stdlib.h>
void updateElement(int arr[], int newElement, int location);
int main(){
	int array[5] = {1, 3, 5, 7, 9};
	int newElement, location;
	printf("Mang ban dau: "); 
	for(int i = 0; i < 5; i++){ 
		printf("%d ", array[i]); 
	} 
	printf("\n");
	printf("Moi ban nhap gia tri muon cap nhat: ");
	scanf("%d", &newElement);
	printf("Moi ban nhap vi tri muon cap nhat (arr[0] - arr[4]):  ");
	scanf("%d", &location);
	updateElement(array, newElement, location);
	printf("Mang sau khi cap nhat: "); 
	for(int i = 0; i < 5; i++){ 
		printf("%d ", array[i]); 
	} 
	return 0;
}
void updateElement(int arr[], int newElement, int location){
			arr[location] = newElement;
		}

