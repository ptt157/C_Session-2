#include <stdio.h>

int main() {
    const float PI = 3.14;
    float banKinh = 5.0, chuVi, dienTich;
    chuVi = 2 * PI * banKinh;
    dienTich = PI * banKinh * banKinh;
    printf("Chu vi cua hinh tron: %.2f\n", chuVi);
    printf("Dien tich cua hinh tron: %.2f\n", dienTich);
    return 0;
}

