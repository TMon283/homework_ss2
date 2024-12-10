#include <stdio.h>
int ucln(int a, int b) {
    if (b == 0)
        return a;
    return ucln(b, a % b);
}
int main() {
    int num1, num2;
    printf("Nhap so nguyen thu nhat: ");
    scanf("%d", &num1);
    printf("Nhap so nguyen thu hai: ");
    scanf("%d", &num2);
    int result = ucln(num1, num2);
    printf("UCLN cua %d và %d la: %d\n", num1, num2, result);

    return 0;
}

