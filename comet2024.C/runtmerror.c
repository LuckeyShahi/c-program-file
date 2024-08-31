#include <stdio.h>

int main() {
    int x = 10;
    int y = 0;
    if (y != 0) {
        int z = x / y;
        printf("Value of z: %d\n", z);
    } else {
        printf("Error: Division by zero!\n");
    }
    return 0;
}