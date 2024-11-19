#include <stdio.h>

int main() {
    float chieuDai = 10.0, chieuRong = 5.0, chuVi, dienTich;
    chuVi = 2 * (chieuDai + chieuRong);
    dienTich = chieuDai * chieuRong;
    printf("Chu vi cua hinh chu nhat: %.0f\n", chuVi);
    printf("Dien tich cua hinh chu nhat: %.0f\n", dienTich);
    return 0;
}

