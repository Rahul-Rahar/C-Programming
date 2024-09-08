#include <stdio.h>

int main () {

  // Assignment Operators
                      /* Assignment Operators are used to assign
                        values to variables. */

  // 1. +=

  int a = 56;
  int b = 87;
  a += b;
  printf("%d\n", a);

  // 2. -=

  int c,d;
  c = 56, d = 45;
  c -= d;
  printf("%d\n", c);

  // 3. *=
  
  int e,f;
  e = 56, f = 45;
  e *= d;
  printf("%d\n", e);

  // 4. /=

  int g,h;
  g = 56, h = 28;
  g /= h;
  printf("%d\n", g);

  // 5. %=

  int i, j;
  i =45, j=12;
  i %= j;
  printf("%d\n", i);

  return 0;
}