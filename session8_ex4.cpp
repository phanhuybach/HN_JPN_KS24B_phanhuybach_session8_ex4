#include <stdio.h>

int main() {
    // Khai báo và gán giá tr? cho m?ng 2 chi?u
    int mang[3][4] = {
        {10, 20, 30, 40},
        {50, 60, 70, 80},
        {90, 15, 25, 35}
    };

    int soDong = 3; // S? dòng c?a m?ng
    int soCot = 4;  // S? c?t c?a m?ng
    int max = mang[0][0]; // Gi? s? ph?n t? d?u tiên là l?n nh?t

    // Duy?t qua t?t c? các ph?n t? d? tìm giá tr? l?n nh?t
    for (int i = 0; i < soDong; i++) {
        for (int j = 0; j < soCot; j++) {
            if (mang[i][j] > max) {
                max = mang[i][j];
            }
        }
    }

    // In ra ph?n t? l?n nh?t
    printf("Phan tu lon nhat trong mang la: %d\n", max);

    return 0;
}

