#include <stdio.h>

int main() {
    int var = 10; 
    int *ptr; 

    ptr = &var; 

    printf("Value of var: %d\n", var);
    printf("Address of var: %p\n", &var);
    printf("Value of ptr: %p\n", ptr);
    printf("Value at address pointed by ptr: %d\n", *ptr);

    return 0;
}