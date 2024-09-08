#include <stdio.h>

int main() {

       /* 1.
        Write a C program that performs the following operations:

1. Declare two integer variables a and b, and assign them values.

2. Use arithmetic operators (+, -, *, /, %) to calculate and print:

a). The sum of a and b
b). The difference when b is subtracted from a
c). The product of a and b
d). The quotient when a is divided by b
e). The remainder when a is divided by b
f). Declare a float variable c and assign it a value.

3. Use the assignment operators (+=, -=, *=, /=, %=) to perform the following:

a). Add 5 to c
b). Subtract 3 from c
c). Multiply c by 2
d). Divide c by 4
e). Use the increment (++) and decrement (--) operators on a and b, and print their updated values.

4. Use relational operators (==, !=, >, <, >=, <=) to compare a and b and print the results of the comparisons:

a). Is a equal to b? 
b). Is a not equal to b? 
c). Is a greater than b? 
d). Is a less than or equal to b? 
       
       */ 

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


/* Exercise 2.
       1. Declare three integer variables x, y, and z, and assign them values.

2. Use logical operators to perform the following:

a). Check if both x and y are greater than zero.
b). Check if either x or y is less than zero.
c). Use the NOT operator to check if z is not equal to zero.
d). Combine relational and logical operators to check if x is greater than y and y is greater than z.

3. Use relational operators to compare x, y, and z, and use logical operators to:

a). Check if all three numbers are positive.
b). Check if at least one of the three numbers is negative.

4. Add expressions using both arithmetic and logical operators to evaluate complex conditions, such as:

a). (x + y) > z && x > y
b). (x * y) <= z || z != 0
*/

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