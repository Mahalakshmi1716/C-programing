#include <stdio.h>

int main() {
    int rows, i, j;

    printf("5");
    scanf("%d", &rows);

    for (i = 1; i <= rows; ++i) {
        for (j = 1; j <= rows; ++j) {
            if (j <= rows - i) {
                printf("  "); 
            } else {
                printf("* "); 
            }
        }
        printf("\n");
    }

    return 0;
}
