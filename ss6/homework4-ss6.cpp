#include<stdio.h>
#include<math.h>
int main(){
	int a, b, c;
	float denta;
	do{
		printf("Nhap so a ");
		scanf("%d", &a);
		printf("Nhap so b ");
		scanf("%d", &b);
		printf("Nhap so c ");
		scanf("%d", &c);
		denta = b * b - 4 * a * c;
		if (a == 0){
			printf("Phuong trinh vo nghiem\n");
			break;
		}
		if (denta == 0){
			float x0 =-b/2*a;
			printf("Phuong trinh co nghiem kep: %.2f\n", x0);
			break;
		}
		if (denta > 0){
			float x1 = -b+sqrt(denta)/2*a;
			float x2 = -b-sqrt(denta)/2*a;
			printf("Phuong trinh co 2 nghiem phan biet la: %.2f va %.2f\n", x1, x2);
			break;
		}
	} while(a!=0);
	return 0;
}
