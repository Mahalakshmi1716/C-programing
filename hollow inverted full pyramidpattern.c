#include <stdio.h>

int main() {
    int rows = 5;
    int i, j, space;


    for (i = rows; i >= 1; --i) {
        
        for (space = 0; space < rows - i; ++space)
            printf(" ");

        
        for (j = 1; j <= 2 * i - 1; ++j) {
            if (j == 1 || j == 2 * i - 1 || i == rows)
                printf("*");
            else
                printf(" ");
        }

    
        printf("\n");
    }

    return 0;
}
