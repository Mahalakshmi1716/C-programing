#include <stdio.h>

int main() {
    int rows = 5;
    int i, j, space;

    
    for (i = 1; i <= rows; ++i) {
        for (space = 1; space < i; ++space)
            printf(" ");

        
        for (j = 1; j <= (rows - i) * 2 + 1; ++j) {
            if (j == 1 || j == (rows - i) * 2 + 1)
                printf("*");
            else
                printf(" ");
        }

    
        printf("\n");
    }

    
    for (i = rows - 1; i >= 1; --i) {
        
        for (space = 1; space < i; ++space)
            printf(" ");


        for (j = 1; j <= (rows - i) * 2 + 1; ++j) {
            if (j == 1 || j == (rows - i) * 2 + 1)
                printf("*");
            else
                printf(" ");
        }

        
        printf("\n");
    }

    return 0;
}
