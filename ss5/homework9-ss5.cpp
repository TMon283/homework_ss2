#include<stdio.h>
int main(){
	int i, index, num1, num2, num3;
	float ket_qua;
	do{
		printf("\nMENU\n");
		printf("1. Nhap 3 so\n");
		printf("2. Tong 3 so\n");
		printf("3. Trung binh cong 3 so\n");
		printf("4. So nho nhat\n");
		printf("5. So lon nhat\n");
		printf("6. Thoat\n");
		printf("Lua chon cua ban: ");
		scanf("%d", &i);
		switch (i) {
            case 1:
            	printf("Nhap so thu nhat: ");
    			scanf("%d", &num1);
    			printf("Nhap so thu hai: ");
   				scanf("%d", &num2);
   				printf("Nhap so thu ba: ");
   				scanf("%d", &num3);
                break;
            case 2:
                ket_qua = num1 + num2 + num3;
                printf("Ket qua: %.0f\n", ket_qua);
                break;
            case 3:
            	ket_qua = (num1 + num2 + num3) / 3;
                printf("Ket qua: %.0f\n", ket_qua);
                break;
            case 4:
				if (num1 > num2){
					index = num1;
					num1 = num2;
					num2 = index;
				}
				if (num1 > num3){
					index = num1;
					num1 = num3;
					num3 = index;
				}
				if (num2 > num3){
					index = num2;
					num2 = num3;
					num3 = index;
				}
				printf("So nho nhat la %d\n", num1);
                break;
            case 5:
				if (num1 > num2){
					index = num1;
					num1 = num2;
					num2 = index;
				}
				if (num1 > num3){
					index = num1;
					num1 = num3;
					num3 = index;
				}
				if (num2 > num3){
					index = num2;
					num2 = num3;
					num3 = index;
				}
				printf("So nho nhat la %d\n", num3);
                break;    
            case 6:
                printf("Thoat chuong trinh.\n");
                break;
            default:
                printf("Lua chon không hop le\n");
        }
	} while (i != 6);
	return 0;
}
