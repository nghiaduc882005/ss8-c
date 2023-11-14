#include <stdio.h>

int main() {
    int n, findNumber, sum = 0;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    int arr[n];
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Nhap gia tri can tim kiem: ");
    scanf("%d", &findNumber);
    printf("Cac phan tu co gia tri bang %d o vi tri: ", findNumber);
    for (int i = 0; i < n; i++) {
        if (arr[i] == findNumber) {
            printf("%d ", i);
            sum += arr[i];
        }
    }
    printf("\nTong cac phan tu co gia tri bang %d la: %d", findNumber, sum);
    return 0;
}
