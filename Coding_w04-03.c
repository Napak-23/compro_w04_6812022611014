#include <stdio.h> // คำสั่งนำเข้า Librery

int main() { // int(Keyword),main(Identifier)
    char nameInitial = 'N'; // ประเภทอักขระ
    int age = 18; // ประเภทจำนวนเต็ม    
    float weight = 53.2; // ประเภททศนิยม     
    char gender[] = "Female"; // ประเภทอักขระ

    // แสดงผลข้อมูลทั้งหมดออกหน้าจอ
    printf("nameInitial = %c\n", nameInitial);
    printf("age = %d\n", age);
    printf("weight = %.1f\n", weight);
    printf("gender = %s\n", gender);

    return 0; // คืนค่าจบโปรแกรม Keyword
}