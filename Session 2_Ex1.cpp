#include <stdio.h>
#include <stdbool.h> // De su dung kieu bool

int main() {
    // Kieu int: kieu so nguyên, thuong dung de luu tru các so nguyen
    int age = 20; // Khoi tao bien age voi giá tri 20

    // Kieu float: kieu so thuc có dau cham dong (4 byte), thuong dung de luu tru cac so thap phan
    float height = 1.75; // Khoi tao bien height voi giá tri 1.75 (don vi: met)

    // Kieu double: kieu so thuc có dau cham dong voi do chinh xac cao hon float (8 byte)
    double weight = 65.5; // Khoi tao bien weight voi giá tri 65.5 (don vi: kg)

    // Kieu char: kieu ky tu, luu tru mot ky tu ASCII duy nhat (1 byte)
    char grade = 'A'; // Khoi tao bien grade voi giá tri 'A'

    // Kieu bool: kieu logic, luu tru gia tri dung (1) hoac sai (0)
    bool is_student = true; // Khoi tao bien is_student voi gia tri true (nghia la la sinh vien)

    // Kieu unsigned int: kieu so nguyen khong dau, chi luu tru so nguyen duong
    unsigned int days_in_year = 365; // Khoi tao bien days_in_year voi gia tri 365

    // In ra các giá tri cua bien
    printf("Age: %d\n", age);
    printf("Height: %.2f\n", height);
    printf("Weight: %.2f\n", weight);
    printf("Grade: %c\n", grade);
    printf("Is Student: %d\n", is_student);
    printf("Days in Year: %u\n", days_in_year);

    return 0;
}

