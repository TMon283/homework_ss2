#include<stdio.h>
int main(){
	int i, tien_gui, month;
	float lai_suat, tien_lai, tien_duoc;
	printf("Ban muon gui bao nhieu tien ");
	scanf("%d", &tien_gui);
	int a = tien_gui;
	printf("Nhap lai suat ");
	scanf("%f", &lai_suat);
	printf("Ban muon gui tien trong bao nhieu thang ");
	scanf("%d", &month);
	if (month == 0 or tien_gui <= 0 or lai_suat < 0){
		printf("Thong tin da nhap khong hop le\n");
	}
	for(i = 1; i <= month; i++){
		tien_lai = tien_gui * lai_suat / 100;
		tien_duoc = tien_lai + tien_gui;
		tien_gui = tien_duoc;
	}
	tien_lai = tien_duoc - a;
	printf("Tien lai nhan duoc sau %d thang la %.0f\n", month, tien_lai);
	printf("Tien nhan duoc sau %d thang la %.0f\n", month, tien_duoc);
	return 0;
}
