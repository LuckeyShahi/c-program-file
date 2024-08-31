#include <stdio.h>

int main() {
    register int x = 10; 
    printf("Value of x: %d\n", x);
    x = 20;
    printf("New value of x: %d\n", x);
    return 0;
}