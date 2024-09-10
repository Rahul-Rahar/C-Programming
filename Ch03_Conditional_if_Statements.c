#include <stdio.h>  

/* Conditional Statements:-  
   Conditional statements in C are used to perform different actions based on whether a specified condition evaluates to true or false.
    They allow the program to make decisions and control the flow of execution. */   
   
    // if Statement: 
int main() {  
    // Simple Program to check if the Entered Number is EVEN or ODD using only with 'if' statement.
    
    int a; // Declare the variable  

    // Prompt the user to enter a number  
    printf("Enter a Number: ");  
    scanf("%d", &a); // Read the input into the variable  

    // Check if the number is even  
    if (a % 2 == 0) // If this condition is true The Code inside {} will run.
     {  
        printf("The Entered Number %d is an EVEN Number.\n", a); 
    }  

    // Check if the number is odd  
    if (a % 2 != 0) // If this condition is true, The code inside {} will run.
    {  
        printf("The Entered Number %d is an ODD Number.\n", a);  
    }  

    return 0; // Return success  
}