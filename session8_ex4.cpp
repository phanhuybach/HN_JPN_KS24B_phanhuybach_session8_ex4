#include <stdio.h>

int main() {
    // Khai b�o v� g�n gi� tr? cho m?ng 2 chi?u
    int mang[3][4] = {
        {10, 20, 30, 40},
        {50, 60, 70, 80},
        {90, 15, 25, 35}
    };

    int soDong = 3; // S? d�ng c?a m?ng
    int soCot = 4;  // S? c?t c?a m?ng
    int max = mang[0][0]; // Gi? s? ph?n t? d?u ti�n l� l?n nh?t

    // Duy?t qua t?t c? c�c ph?n t? d? t�m gi� tr? l?n nh?t
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

