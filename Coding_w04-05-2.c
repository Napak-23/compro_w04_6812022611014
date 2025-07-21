#include <stdio.h>

void countCall() {
    int counter = 0;
    counter++;
    printf("Call Function: Counter = %d\n", counter);
}

int main() {
    printf("Startng function calls....\n");
    countCall();
    printf("After first call:\n");
    countCall();
    return 0;
}