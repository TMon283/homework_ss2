#include<stdio.h>
int main(){
	int year, month;
	printf("Nhap nam ");
	scanf("%d", &year);
	printf("Nhap thang ");
	scanf("%d", &month);
	if(year % 4 == 0 and year % 400 == 0){
		if(month == 2){
			printf("So ngay trong thang %d nam %d la 28\n", month, year);
		} else if(month == 1 or month == 3 or month == 5 or month == 7 or month == 8 or month == 10 or month == 12){
			printf("So ngay trong thang %d nam %d la 31\n", month, year);
		} else if(month == 4 or month == 6 or month == 9 or month == 11){
			printf("So ngay trong thang %d nam %d la 30\n", month, year);
		}
	} else if(year % 4 != 0 and year % 400 != 0){
		if(month == 2){
			printf("So ngay trong thang %d nam %d la 29\n", month, year);
		} else if(month == 1 or month == 3 or month == 5 or month == 7 or month == 8 or month == 10 or month == 12){
			printf("So ngay trong thang %d nam %d la 31\n", month, year);
		} else if(month == 4 or month == 6 or month == 9 or month == 11){
			printf("So ngay trong thang %d nam %d la 30\n", month, year);
		}
	}
	return 0;
}
