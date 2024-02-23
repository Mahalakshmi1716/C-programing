#include <stdio.h>

int main() {
    int rows = 5;
    int i, j, space;

    for (i = 1; i <= rows; ++i) {
        
        for (space = 1; space <= rows - i; ++space) {
            printf(" ");
        }

        
        for (j = 1; j <= rows; ++j) {
            printf("*");
        }

        
        printf("\n");
    }

    return 0;
}
