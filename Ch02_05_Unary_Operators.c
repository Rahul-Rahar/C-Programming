#include <stdio.h>

int main() {

// Unary Operators
             /* Unary Operators perform commands on Single Operand */

  // 1. Increament Unary Operator (++)

  int num = 4;
  int x;
  x = ++num; // Prefix first Increase the value to 5 and then Put it into x.
  printf("Value of X in Prefix: %d\n Value of num in Prefix: %d\n", x, num);

  int num1 = 5;
  int x1;
  x1 = num1++; // Postfix only assigns increaased value to num1 but use it into
               // x1 first as x1=5, num1=6.
  printf("Value of x1 after Postfix: %d\n Value of num1 after Postfix %d\n", x1,
         num1);

  // 2. Decreament Unary Operator (--)

  int num2 = 4;
  int x2;
  x2 = --num2; // Prefix first Decreases the num2 value to 3 and then Put it
               // into x2.
  printf("Value of x2 in Prefix: %d\n Value of num2 in Prefix: %d\n", x2, num2);

  int num3 = 5;
  int x3;
  x3 = num3--; // Postfix only assigns Decreaased value to num3 but use it into
               // x3 first as x3=5, num3=4.
  printf("Value of x3 after Postfix: %d\n Value of num3 after Postfix %d\n", x3,
         num3);
}