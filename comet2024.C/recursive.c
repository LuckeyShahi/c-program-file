#include <stdio.h>

int sum(int n) {
    if (n == 1) {
        return 1; 
    } else {
        return n + sum(n-1);
    }
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Sum of numbers from 1 to %d: %d\n", num, sum(num));
    return 0;
}