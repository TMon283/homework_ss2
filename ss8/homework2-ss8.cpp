#include<stdio.h>
int main(){
	int a = 0, b = 0, i, j, number, array[3][3]={{1, 2, 3},{4, 5, 6},{7, 8, 9}};
	printf("Nhap phan tu ban muon tim: ");
	scanf("%d", &number);
	for(i = 0; i < 3; i++){
		for(j = 0; j < 3; j++){
			if(number == array[i][j]){
				a = i + 1;
				b = j + 1;
			}
		}
	}
	if(a == 0 and b == 0){
		printf("Gia tri vua nhap khong ton tai trong mang\n");
	} else{
		printf("Vi tri phan tu trong mang la thu %d, dong %d\n", b, a);
	}
	return 0;
}
