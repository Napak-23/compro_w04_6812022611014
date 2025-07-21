#include <stdio.h> // ขาดเครื่องหมาย # และ < >

int main() { // ฟังก์ชันหลักที่โปรแกรมเริ่มทำงาน int(Keyword),main(Identifier)
    int a = 10; // ขาดเครื่องหมาย ; ปิดท้าย
    printf("a = %d", a); // ขาดเครื่องหมาย ; ปิดท้ายคำสั่ง Identifier
    return 0; // ขาดเครื่องหมาย ; ปิดท้าย คืนค่าจบโปรแกรม Keyword
}