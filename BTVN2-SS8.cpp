#include <stdio.h>// row(hang ngang), column(hang doc) 
int main() {
    int row, column, sum = 0;
    printf("Nhap so phan tu cua mang 2 chieu (row*col): ");
    scanf("%d%d", &row, &column);
    float Array[row][column];
    printf("Nhap gia tri cac phan tu mang 2 chieu:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            scanf("%f", &Array[i][j]);
            if ((int)Array[i][j] % 2 == 0) {
                printf("%.2f ", Array[i][j]);
                sum += (int)Array[i][j];
            }
        }
        printf("\n");
    }
    printf("Tong cac phan tu co gia tri chan la: %d", sum);
}

