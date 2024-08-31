#include <stdio.h>

int main() {
    int integer = 10;
    float floatingPoint = 3.14;
    double doublePrecision = 3.14159;
    long longInteger = 10000000000;
    unsigned int unsignedInteger = 20;

    printf("Integer: %d\n", integer);
    printf("Floating Point: %f\n", floatingPoint);
    printf("Double Precision: %lf\n", doublePrecision);
    printf("Long Integer: %ld\n", longInteger);
    printf("Unsigned Integer: %u\n", unsignedInteger);

    return 0;
}