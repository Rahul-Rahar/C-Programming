#include <stdio.h>

    /* Else-if Statements or If-else-if Ladder:-
                                            This allows for multiple conditions to be checked in sequence. 
                                            If the first condition is false, the next condition is evaluated, 
                                            and so on.
    Syntax: if (condition1) {  
            // code for condition1  
                } else if (condition2) {  
                // code for condition2  
                } else {  
                // code if none of the conditions are true  
                }
    */
    
int main(){
    // Simple Student Grade Program using Else-if Conditional Statements.

    int sub1, sub2, sub3; // Declaring Integer Variable for Three Subjects
    printf("Enter Marks in Subject 1 out of 100: "); 
    scanf("%d", &sub1); // Subject 1 Marks User Input

    printf("Enter Marks in Subject 2 out of 100: ");
    scanf("%d", &sub2); // Subject 2 Marks User Input

    printf("Enter Marks in Subject 3 out of 100: ");
    scanf("%d", &sub3); // Subject 3 Marks User Input
    
    float result = (sub1 + sub2 + sub3)/3.00f; // Result in Float

    // Code for Grade A
    if (result>=90) {
        printf("Total Marks: %d\n", (sub1+sub2+sub3));
        printf("Total Percentage: %f\n", result);
        printf("You achieved Grade A\n");
    }

    // Code for Grade B
    else if (result<90 && result>=80) {
        printf("Total Marks: %d\n", (sub1+sub2+sub3));
        printf("Total Percentage: %f\n", result);
        printf("You achieved Grade B\n");
    }

    // Code for Grade C
    else if (result<80 && result>=60) {
        printf("Total Marks: %d\n", (sub1+sub2+sub3));
        printf("Total Percentage: %f\n", result);
        printf("You achieved Grade C\n");
    }

    // Code for Grade D
    else if (result<60 && result>=33.33) {
        printf("Total Marks: %d\n", (sub1+sub2+sub3));
        printf("Total Percentage: %f\n", result);
        printf("You achieved Grade D\n");
    }

    // Code for Student is Failed
    else {
        printf("Total Marks: %d\n", (sub1+sub2+sub3));
        printf("Total Percentage: %f\n", result);
        printf("You are Failed.\n");
    }

    return 0; // Success of Program


}