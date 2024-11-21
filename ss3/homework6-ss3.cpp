#include<stdio.h>
int main(){
	int edge;
	int height;
	printf("Moi ban nhap chieu dai canh cua tam giac ");
	scanf("%d", &edge);
	printf("Moi ban nhap chieu cao cua tam giac ");
	scanf("%d", &height);
	int dien_tich = edge * height / 2;
	printf("Dien tich tam giac la %d\n", dien_tich);
	return 0;
}
