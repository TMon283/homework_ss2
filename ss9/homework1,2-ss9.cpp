#include<stdio.h>
int main(){
	int currentLength, addNumber, addIndex, array[100];
	printf("Nhap so phan tu muon nhap ");
	scanf("%d", &currentLength);
	for(int i = 0; i < currentLength; i++){
		printf("Nhap phan tu thu %d ", i + 1);
		scanf("%d", &array[i]);
	}
	printf("Mang ban vua nhap la: ");
	for(int i = 0; i < currentLength; i++){
		printf("%d ", array[i]);
	}
	printf("\nGia tri ban muon them la ");
	scanf("%d", &addNumber);
	printf("Vi tri ban muon them la (0-%d):", currentLength);
	scanf("%d", &addIndex);
	if(addIndex < 0 and addIndex > 99){
		printf("Vi tri khong hop le\n");
	}else{
		if(addIndex >= currentLength){
			array[addIndex] = addNumber;
			currentLength = addNumber + 1;
		}else{
			for(int i = currentLength; i > addNumber; i--){
				array[i] = array[i - 1];
			}
			array[addIndex] = addNumber;
			currentLength++;
		}
		printf("Mang sau khi them phan tu la\n");
		for(int i = 0; i < currentLength - 1; i++){
			printf("%d ", array[i]);
		}
		printf("\n");
	}
	return 0;
}
