#include <stdio.h>

int main() {

  int a = 34;
  int b = 32;
  printf("Values of a and b are: %d\n%d\n", a, b);

  // Arithmatic Operators
  printf("Sum of and b: %d\n", a + b);
  printf("Differnce when b is subtracted from a: %d\n", a - b);
  printf("Product of a and b: %d\n", a * b);
  printf("Quotient when a is divided by b: %d\n", a / b);
  printf("Remainder when a is divided by b: %d\n", a % b);

  // Assignment Operators with Float
  float c = 21.09f;
  c += 5;
  printf("c after adding 5: %f\n", c);
  c -= 3;
  printf("c after substracting 3: %f\n", c);
  c *= 2;
  printf("c after multiplying by 2: %f\n", c);
  c /= 4;
  printf("c after dividing by 4: %f\n", c);

  // Increment and Decreament Operators
  ++a;
  --b;
  printf("Value of a after increment: %d\n Value of b after decrement: %d\n", a,
         b);

  // Relational Operators
  printf("Is a equal to b?: %d\n Is a not equal to b?: %d\nIs a greater than "
         "b?: %d\nIs a less than or equal to b?: %d\n",
         a == b, a != b, a > b, a <= b);

  // Logical Operators
  int x, y, z;
  x = 9, y = 10, z = -8;

  printf("Both x and y are greater than zero?: %d\nEither x or y is less than "
         "zero?: %d\nz not equal to zero?: %d\nx is greater than y and y is "
         "greater than z?: %d\n",
         x > 0 && y > 0, x < 0 || y<0, z != 0, x> y && y > z);

  printf("All three numbers are positive?: %d\nAtleast one of the three "
         "numbers is negative?: %d\n",
         x > 0 && y > 0 && z > 0, x < 0 || y < 0 || z < 0);

  printf("(x + y) > z and x > y: %d\n(x * y) <= z or z is not equal to zero: %d\n",
      (x + y) > z && x > y, (x * y) <= z || z != 0);

  return 0;
}