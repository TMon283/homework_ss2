#include<stdio.h>
int main(){
	float radius;
	printf("Moi ban nhap ban kinh ");
	scanf("%f", &radius);
	float chu_vi = 2 * radius * 3.14;
	float dien_tich = radius * radius * 3.14;
	printf("Chu vi hinh tron la %.2f\n", chu_vi);
	printf("Dien tich hinh tron la %.2f\n", dien_tich);
	return 0;
}
