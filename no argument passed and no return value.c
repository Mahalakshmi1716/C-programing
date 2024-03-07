#include <stdio.h>
int num1, num2;
void add() {
  int sum = num1 + num2;
  printf("Sum = %d\n", sum);
}
void subtract() {
  int difference = num1 - num2;
  printf("Difference = %d\n", difference);
}
void multiply() {
  int product = num1 * num2;
  printf("Product = %d\n", product);
}
void divide() {
  float quotient = num1 / (float) num2;
  printf("Quotient = %.2f\n", quotient);
}
void absolute() {
  int abs_num1 = num1 < 0 ? -num1 : num1;
  int abs_num2 = num2 < 0 ? -num2 : num2;
  printf("Absolute value of %d = %d\n", num1, abs_num1);
  printf("Absolute value of %d = %d\n", num2, abs_num2);
}
int main() {
  num1=33;
  num2=44;
  
  add();
  subtract();
  multiply();
  divide();
  absolute();
  return 0;
}