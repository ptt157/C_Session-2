#include <stdio.h>

int main() {
    // Khai bao va khoi tao hai bien so nguyen
    int soA = 5;
    int soB = 10;

    // Tinh tong cua hai bien soA va soB
    int tong = soA + soB;

    // Tinh hieu cua hai bien soA va soB
    int hieu = soA - soB;

    // Tinh tich cua hai bien soA va soB
    int tich = soA * soB;

    // Tinh thuong cua hai bien soA va soB
    float thuong = (float)soA / soB; // �p ki?u d? c� k?t qu? chia ch�nh x�c

    // In ra ket qua
    printf("Tong cua %d va %d la: %d\n", soA, soB, tong);
    printf("Hieu cua %d va %d la: %d\n", soA, soB, hieu);
    printf("Tich cua %d va %d la: %d\n", soA, soB, tich);
    printf("Thuong cua %d va %d la: %.2f\n", soA, soB, thuong);

    return 0;
}

