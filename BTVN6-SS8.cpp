#include <stdio.h>

int main() {
    int n, deleteIndex;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    int oldNumbers[n];
    printf("Nhap gia tri cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        printf("Phan tu thu %d: ", i+1);
        scanf("%d", &oldNumbers[i]);
    }

    printf("Nhap chi so phan tu can xoa: ");
    scanf("%d", &deleteIndex);

    int newNumbers[n-1];
    for (int i = 0; i < deleteIndex; i++) {
        newNumbers[i] = oldNumbers[i];
    }
    for (int i = deleteIndex+1; i < n; i++) {
        newNumbers[i-1] = oldNumbers[i];
    }

    printf("Mang sau khi xoa phan tu:\n");
    for (int i = 0; i < n-1; i++) {
        printf("%d ", newNumbers[i]);
    }
    printf("\n");

    return 0;
}
