#include <stdio.h>
#include <string.h>

int main() {
    
    char str1[20];
    strcpy(str1, "Hello, World!");
    printf("String 1: %s\n", str1);

    // Method 2: Using initialization
    char str2[] = "Hello, World!";
    printf("String 2: %s\n", str2);

    return 0;
}