#include <stdio.h>

void increment(int x) {
    x = x + 1;
    printf("Value of x inside function: %d\n", x);
}

int main() {
    int x = 10;
    printf("Value of x before function call: %d\n", x);
    increment(x);
    printf("Value of x after function call: %d\n", x);
    return 0;
}
