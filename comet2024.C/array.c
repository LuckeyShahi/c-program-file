#include <stdio.h>

int main() {

    int scores[5];

    scores[0] = 90;
    scores[1] = 80;
    scores[2] = 95;
    scores[3] = 70;
    scores[4] = 85;

    printf("Scores:\n");
    for (int i = 0; i < 5; i++) {
        printf("Score %d: %d\n", i + 1, scores[i]);
    }

    return 0;
}