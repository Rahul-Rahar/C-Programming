/* Here we will write a program to create Multiplication Tables for 'N' numbers using Nested While Loop*/

#include <stdio.h>  // Include standard input-output library

#define Columns 10  // Define a constant for the number of columns in the multiplication table

int main () {
    int N, x=0, y;  // Declare variables: N for the number of tables, x and y as counters

    // Prompt the user to enter the number of multiplication tables needed
    printf("Enter How Much Numbers You Wants Multiplication Tables of?: ");
    scanf("%d", &N);  // Read the user input and store it in N

    // Outer while loop to iterate through each number from 1 to N
    while(x++<N) {
        y=0;  // Reset y to 0 for each new number

        // Inner while loop to generate the multiplication table for the current number
        while(y++<Columns)
            printf(" %3d", x*y);  // Print the product of x and y with a field width of 3

        printf("\n");  // Print a newline character after each table
    }

    return 0;  // Return 0 to indicate successful execution
}
}