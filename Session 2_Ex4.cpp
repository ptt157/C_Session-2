#include <stdio.h>

int main() {
    // Khai bao bien canh hinh vuong va gan gia tri cho no
    int canh = 5;

    // Tinh chu vi hinh vuong (chu vi = canh * 4)
    int chuVi = canh * 4;

    // Tinh dien tich hinh vuong (dien tich = canh * canh)
    int dienTich = canh * canh;

    // In ra ket qua
    printf("Canh hinh vuong: %d\n", canh);
    printf("Chu vi hinh vuong: %d\n", chuVi);
    printf("Dien tich hinh vuong: %d\n", dienTich);

    return 0;
}

