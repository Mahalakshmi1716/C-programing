#include<stdio.h>
#include<stdlib.h>

int num1, num2;

int add() {
    return num1 + num2;
}

int sub() {
    return num1 - num2;
}

int mul() {
    return num1 * num2;
}

int divide() {
    if (num2 == 0) {
        printf("Error: Division by zero\n");
        exit(1); 
    }
    return num1 / num2;
}

int absolute() {
    return abs(num1);
}

int main() {
    int result;

   num1=70;
   num2=10;

    result = add();
    printf("Addition=%d\n", result);

    result = sub();
    printf("Subtraction=%d\n", result);

    result = mul();
    printf("Multiplication=%d\n", result);

    result = divide();
    printf("Division=%d\n", result);

    result = absolute();
    printf("Absolute value=%d\n", result);

    return 0;
}