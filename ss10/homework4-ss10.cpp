#include <stdio.h>
int main() {
    int arr[] = {37, 15, 22, 13, 25};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i, j, minIndex;
    for (i = 0; i < n-1; i++) {
        minIndex = i;
        for (j = i+1; j < n; j++)
            if (arr[j] < arr[minIndex])
                minIndex = j;
        int temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }
    printf("Mang da sap xep: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

