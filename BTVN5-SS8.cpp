#include <stdio.h>

int main() {
    int n, updateValue, updateIndex;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    int numbers[n];
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }
    printf("Nhap gia tri can cap nhat: ");
    scanf("%d", &updateValue);
    printf("Nhap vi tri can cap nhat: ");
    scanf("%d", &updateIndex);
    numbers[updateIndex] = updateValue;
    printf("Mang sau khi cap nhat la:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", numbers[i]);
    }
    return 0;
}
