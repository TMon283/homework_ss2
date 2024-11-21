#include<stdio.h>
int main(){
	int toan;
	int van;
	int anh;
	printf("Moi ban nhap diem toan ");
	scanf("%d", &toan);
	printf("Moi ban nhap diem van ");
	scanf("%d", &van);
	printf("Moi ban nhap diem anh ");
	scanf("%d", &anh);
	float tong_diem = toan + van + anh;
	float diem_tb = tong_diem / 3;
	printf("Tong diem la %.2f\n", tong_diem);
	printf("Diem tb la %.2f\n", diem_tb);
	return 0;
}
