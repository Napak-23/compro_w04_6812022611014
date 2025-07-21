#include <stdio.h>

int main(){
    float score = 90.5; // ไม่แสดงทศนิยม
    printf("Score: %.1f\n" , score);
    int scoer = 90.5;
    printf("Scoer: %d\n" , scoer);

    // สรุปผล
    printf("สรุปผล:\n");
    printf("- int ไม่สามารถเก็บค่าทศนิยม เก็บได้แค่ค่าจำนวนเต็ม\n");
    printf("- float สามารถเก็บค่าทศนิยมได้\n");
    return 0 ;
}