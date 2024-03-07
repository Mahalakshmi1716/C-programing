#include <stdio.h>

void add(int a, int b) {
  printf("%d + %d = %d\n", a, b, a + b);
}

void subtract(int a, int b) {
  printf("%d - %d = %d\n", a, b, a - b);
}

void multiply(int a, int b) {
  printf("%d * %d = %d\n", a, b, a * b);
}

void divide(int a, int b) {
  printf("%d / %d = %d\n", a, b, a / b);
}

void absolute_value(int a) {
  if (a < 0) {
    printf("The absolute value of %d is %d\n", a, -a);
  } else {
    printf("The absolute value of %d is %d\n", a, a);
  }
}

int main() {
  int a, b;
  a=50;
  b=40;

  add(a, b);
  subtract(a, b);
  multiply(a, b);
  divide(a, b);
  absolute_value(a);
  absolute_value(b);

  return 0;
}