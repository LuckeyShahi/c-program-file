#include<stdio.h>

int main() {
    int num;

    printf("Enter an integer (1-5): ");
    scanf("%d", &num);

    switch (num) {
        case 1:
            printf("One\n");
            break;
        case 2:
            printf("Two\n");
            break;
        case 3:
            printf("Three\n");
            break;
        case 4:
            printf("Four\n");
            break;
        case 5:
            printf("Five\n");
            break;
        default:
            printf("Out of range (1-5)\n");
            break;
    }

    return 0;
}
