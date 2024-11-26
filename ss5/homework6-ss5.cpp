#include <stdio.h>

int main() {
    int num1, num2, i;
    float result;
    do {
        printf("\nCALCULATOR\n");
        printf("1. Tong 2 so\n");
        printf("2. Hieu 2 so\n");
        printf("3. Tich 2 so\n");
        printf("4. Thuong 2 so\n");
        printf("5. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &i);
        switch (i) {
            case 1:
            	printf("Nhap so thu nhat: ");
    			scanf("%d", &num1);
    			printf("Nhap so thu hai: ");
   				scanf("%d", &num2);
                result = num1 + num2;
                printf("Ket qua: %.0f\n", result);
                break;
            case 2:
            	printf("Nhap so thu nhat: ");
    			scanf("%d", &num1);
    			printf("Nhap so thu hai: ");
   				scanf("%d", &num2);
                result = num1 - num2;
                printf("Ket qua: %.0f\n", result);
                break;
            case 3:
            	printf("Nhap so thu nhat: ");
    			scanf("%d", &num1);
    			printf("Nhap so thu hai: ");
   				scanf("%d", &num2);
                result = num1 * num2;
                printf("Ket qua: %.0f\n", result);
                break;
            case 4:
            	printf("Nhap so thu nhat: ");
    			scanf("%d", &num1);
    			printf("Nhap so thu hai: ");
   				scanf("%d", &num2);
                if (num2 != 0) {
                    result = (float)num1 / num2;
                    printf("Ket qua: %.2f\n", result);
                } else {
                    printf("Kh�ng the chia cho 0\n");
                }
                break;
            case 5:
                printf("Thoat chuong trinh.\n");
                break;
            default:
                printf("Lua chon kh�ng hop le\n");
        }
    } while (i != 5);

    return 0;
}

