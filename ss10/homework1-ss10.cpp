#include<stdio.h>
int main(){
	int currentLength, addIndex, count = 0, arr[100];
	printf("So luong phan tu trong mang ban muon tao la ");
	scanf("%d", &currentLength);
	for(int i=0; i<currentLength; i++){
		printf("Nhap arr[%d]: ", i);
		scanf("%d", &arr[i]);
	}
	printf("Moi ban nhap phan tu bat ki: ");
	scanf("%d", &addIndex);
	for(int i=0; i<currentLength; i++){
		if(addIndex == arr[i]){
			printf("Phan tu %d ton tai trong mang tai vi tri %d", addIndex, i+1);
			count = 1;
			break;
		}
	}
	if(count != 1){
		printf("Phan tu %d khong ton tai trong mang", addIndex);
	}
	return 0;
}
