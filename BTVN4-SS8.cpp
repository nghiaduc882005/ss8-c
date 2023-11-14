#include <stdio.h>

int main() {
    int n, addValue, addIndex;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    int oldNumbers[n], newNumbers[n+1];
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &oldNumbers[i]);
    }
    printf("Nhap gia tri can them: ");
    scanf("%d", &addValue);
    printf("Nhap vi tri can them: ");
    scanf("%d", &addIndex);
    for (int i = 0; i < addIndex; i++) {
        newNumbers[i] = oldNumbers[i];
    }
    newNumbers[addIndex] = addValue;
    for (int i = addIndex + 1; i < n + 1; i++) {
        newNumbers[i] = oldNumbers[i-1];
    }
    printf("Mang sau khi them phan tu la:\n");
    for (int i = 0; i < n + 1; i++) {
        printf("%d ", newNumbers[i]);
    }
    return 0;
}
