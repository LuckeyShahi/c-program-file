#include <stdio.h>

extern int x; 

void print_x() {
    printf("Value of x: %d\n", x);
}

int main() {
    int x = 10; 
    print_x(); 
    return 0;
}