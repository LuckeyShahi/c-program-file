#include <stdio.h>

int main() 
{
    int i = 1;
    printf("Numbers from 1 to 5:\n");
    do {
        printf("%d\n", i);
        i++;
    } while (i <= 5);
    return 0;
}
