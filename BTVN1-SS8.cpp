#include <stdio.h>
int main(){
    int n, i, max, min;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    int Array[n];
    printf("Nhap cac phan tu cua mang:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &Array[i]);
    }
    max = Array[0];
    min = Array[0];
    for (i = 1; i < n; i++){
        if(Array[i] > max){
            max = Array[i];
        }
        if(Array[i] < min){
            min = Array[i];
        }
    }
    printf("Gia tri lon nhat trong mang la: %d\n", max);
    printf("Gia tri nho nhat trong mang la: %d\n", min);
}

