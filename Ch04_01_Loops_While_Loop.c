/* Loops:- A loop in C is a control structure that repeatedly executes
 a block of code as long as a specified condition is true. 
 The primary types of loops in C are while, do-while, and for. 
 Loops are commonly used for iterating over arrays, processing data, and performing repetitive tasks efficiently.
*/


#include <stdio.h>
    /* While Loop:- A while loop in C is a control flow statement that allows 
    code to be executed repeatedly based on a given boolean condition. 
    The loop continues to execute as long as the condition evaluates to true. 
    The syntax is as follows: while (condition) {  
                                     // code to be executed 
                                     statement1;
                                     statement2; // The Statements will Execute 
                                     until the Condition becomes False.
                                     }
 */

    // Simple Program of Sum of first 10 Positive Integers using While Loop.


    int main() {

         // Declare variables
        long N, index=1, sum=0;

        // Prompt the user to enter a positive integer
        printf("Enter any Positive Integer: ");
        scanf("%ld", &N); // Read the input value into variable N


        // Loop from 1 to N to calculate the sum of positive integers
        while (index<=N) {
            sum +=index; // Add the current index to the sum
            index++; // Increment the index for the next iteration
        }

        // Output the result: the sum of the first N positive integers 
        printf("Sum of First %ld Positive Integers is %ld\n ", N,sum);

        return 0; // Indicate that the program ended successfully
    }