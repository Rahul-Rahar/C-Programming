#include <stdio.h>

int main() {

  // Logical Operators
  /* Logical Operators are used to compare an Expression or Combination of Expressions as result 0 for False, Non-Zero or 1 for True. */

  int a = 2; // Non-zero (True)
  int b = 3; // Non-zero (True)
  int c = 0; // Zero (False)

  // Logical AND (&&)
                // True(1) if and only if Both Expressions are "True", otherwise False(0)

  printf("a<b && a>c: %d\n", a<b && a>c);

  // Logical OR(||)
                // False(1) only if both Expressions or Conditions are "False", Otherwise True(1)

  printf("a>b || a>c: %d\n", a>b || a>c);

  // Logical NOT (!)
                // Reverses the result of the condition or expression. False(0) if Expression is "True". True(1) if Expression is "False".

  int resultA = !a; // Reverse it to False(0)
  int resultB = !b; // Reverse it to False(0)
  int resultC = !c; // Reverse it to True(Non-zero)
  printf("%d\n, %d\n, %d\n", resultA, resultB, resultC);

  return 0;
}