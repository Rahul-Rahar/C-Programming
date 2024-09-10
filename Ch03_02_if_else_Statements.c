#include <stdio.h>

    /* If-else Conditional Statements:- This extends the if statement by providing an 
    alternative block of code that executes if the condition is false.
    for example: if (condition) {  
    // code to be executed if condition is true  
        } else {  
    // code to be executed if condition is false  
        }
     */

int main() {
    // Program for Checking If a Year is Leap Year or Not using If-else Statements.

    int year; // Declaring Variable Name and Type
    printf("Enter Year: "); // Asking User for Input
    scanf("%d", &year); // Code for getting User Input

    // If The Entered Year is a Leap Year
    if (year%4==0 && (year%100!=0 || year%400==0)) {
        printf("The entered Year %d is a LEAP Year.\n", year);
    }

    // If the Entered Year is not a Leap Year
    else {
        printf("The entered Year %d is not a LEAP Year.\n", year);
    } 
    return 0; // Success of Code.

}