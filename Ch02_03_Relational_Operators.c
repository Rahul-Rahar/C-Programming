#include <stdio.h>

int main() {

  // Relational Operators
  /* Relational Operators are used to Compare two values or expressions and Give result as (0 for False), and (1 for true). */

  int a = 5;
  int b = 6;
  int c = 5;

  // 1. == (Equal to)
  printf("%d\n", a == c); // Checks whether a is equal to c.

  // 2. != (Not Equal to)
  printf("%d\n", a != b); // Checks whether a is not equal to b.

  // 3. > (Greater Than)
  printf("%d\n", a > c); // Checks whether a is greater than c.

  // 4. < (Less Than)
  printf("%d\n", a < b); // Checks whether a is less than b.

  // 5. >= (Greater Than or Equal to)
  printf("%d\n", a >= c); // Checks whether a is greater than or equal to c.

  // 6. <= (Less Than or Equal to)
  printf("%d\n", a <= b); // Checks whether a is less than or equal to b.

  return 0;
}