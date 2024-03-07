#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

int divide(int a, int b) {
    return a / b;
}

int absolute(int a) {
    if (a < 0) {
        return -a;
    } else {
        return a;
    }
}

int main() {
    int a, b;
    a=66;
	b=44;
    printf("Sum: %d\n", add(a, b));
    printf("Difference: %d\n", subtract(a, b));
    printf("Product: %d\n", multiply(a, b));
    printf("Quotient: %d\n", divide(a, b));
    printf("Absolute value of %d: %d\n", a, absolute(a));

    return 0;
}