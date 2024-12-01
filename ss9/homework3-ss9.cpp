#include <stdio.h>

int main() {
    int array[100];
    int n, currentLength, deleteIndex, i;
    printf("Nhap so phan tu muon nhap (max = 100): ");
    scanf("%d", &n);
    printf("Nhap cac phan tu cua mang:\n");
    for (i = 0; i < n; i++) {
        printf("Phan tu %d: ", i + 1);
        scanf("%d", &array[i]);
    }
    currentLength = n;
    printf("Mang ban dau la: ");
    for (i = 0; i < currentLength; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
    printf("Nhap vi tri phan tu can xoa (0 - %d): ", currentLength - 1);
    scanf("%d", &deleteIndex);
    if (deleteIndex < 0 and deleteIndex >= currentLength) {
        printf("Vi tri da nhap khong hop li\n");
    } else {
        for (i = deleteIndex; i < currentLength - 1; i++) {
            array[i] = array[i + 1];
        }
        currentLength--;
        printf("Mang sau khi xoa: ");
        for (i = 0; i < currentLength; i++) {
            printf("%d ", array[i]);
        }
        printf("\n");
    }
    return 0;
}

