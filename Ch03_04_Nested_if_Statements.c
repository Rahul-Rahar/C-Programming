#include <stdio.h>
    /* Nested If-else Statements:- A nested if-else statement is when
     one if or else statement is placed inside another if or else statement. 
     This allows for multiple levels of decision-making within your code.
     Syntax:- if (condition1) {  
                // Code to execute if condition1 is true  
                    if (condition2) {  
                        // Code to execute if condition2 is true  
                    } else {  
                        // Code to execute if condition2 is false  
                    }  
              } else {  
                // Code to execute if condition1 is false  
                }*/


int main() {
    // Example of Nested-If-else Conditional Statements

    int num;
    printf("Enter a Number: ");
    scanf("%d", &num);

    if(num>=0) // Outer If statement
     {
        if // Nested If Statement
         (num==0) {
            printf("Entered Number %d is Zero.\n", num);
        }
        else // Nested Else Statement
         {
            printf("Entered Number %d is Positive.\n", num);
        }
    } // End of Outer If Statement With Nested If-else.

    else // Outer Else Statement
     {
        printf("The Number %d is Negative.\n", num);
    }

    return 0; // Code Success
}