#include <stdio.h>

int main() {
    int i;
    printf("Numbers from 1 to 10, skipping 5:\n");
    for (i = 1; i <= 10; i++) {
        if (i == 5) {
            continue;
        }
        printf("%d\n", i);
    }
    return 0;
}
