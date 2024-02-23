#include <stdio.h>

int main() {
    int rows = 5;

    for (int i = rows; i >= 1; --i) {
        for (int space = 0; space < rows - i; ++space) {
            printf("  "); // Print leading spaces
        }
        for (int j = i; j <= 2 * i - 1; ++j) {
            printf("* "); // Print upper half of pyramid
        }
        for (int j = 0; j < i - 1; ++j) {
            printf("* "); // Print lower half of pyramid
        }
        printf("\n");
    }

    return 0;
}
