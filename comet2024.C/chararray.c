#include <stdio.h>

int main() {
    char name[] = "John";

    printf("Name: %s\n", name);

    printf("Individual characters:\n");
    for (int i = 0; i < 4; i++) {
        printf("Character %d: %c\n", i, name[i]);
    }

    return 0;
}