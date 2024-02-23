#include <stdio.h>

int main() {
    int rows = 6;
    int i, j;


    for (i = 1; i <= rows; ++i) {
        
        if (i == 1 || i == rows) {
            for (j = 1; j <= rows; ++j)
                printf("* ");
        } else {
            for (j = 1; j <= rows; ++j) {
                
                if (j == 1 || j == rows)
                    printf("* ");
                else
                    printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}
