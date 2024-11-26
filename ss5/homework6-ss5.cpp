#include <stdio.h>

int main() {
    int num1, num2, choice;
    float result;
    printf("Nhap so thu nhat: ");
    scanf("%d", &num1);
    printf("Nhap so thu hai: ");
    scanf("%d", &num2);

    do {
        printf("\nCALCULATOR\n");
        printf("1. Tong 2 so\n");
        printf("2. Hieu 2 so\n");
        printf("3. Tich 2 so\n");
        printf("4. Thuong 2 so\n");
        printf("5. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                result = num1 + num2;
                printf("Ket qua: %.0f\n", result);
                break;
            case 2:
                result = num1 - num2;
                printf("Ket qua: %.0f\n", result);
                break;
            case 3:
                result = num1 * num2;
                printf("Ket qua: %.0f\n", result);
                break;
            case 4:
                if (num2 != 0) {
                    result = (float)num1 / num2;
                    printf("Ket qua: %.2f\n", result);
                } else {
                    printf("Không the chia cho 0\n");
                }
                break;
            case 5:
                printf("Thoat chuong trinh.\n");
                break;
            default:
                printf("Lua chon không hop le\n");
        }
    } while (choice != 5);

    return 0;
}

