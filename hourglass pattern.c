#include <stdio.h>

int main() {
    int rows = 5;
    int i, j, space;

    
    for (i = 1; i <= rows; ++i) {
        for (space = 1; space <= i - 1; ++space)
            printf(" ");

        for (j = 1; j <= (rows - i + 1) * 2 - 1; ++j)
            printf("*");

        printf("\n");
    }

    
    for (i = rows - 1; i >= 1; --i) {
        for (space = 1; space <= i - 1; ++space)
            printf(" ");

        for (j = 1; j <= (rows - i + 1) * 2 - 1; ++j)
            printf("*");

        printf("\n");
    }

    return 0;
}
