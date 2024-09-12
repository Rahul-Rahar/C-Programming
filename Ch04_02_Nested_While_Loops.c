/* Nested While Loops:- Nested While Loops refer to a situation where one 'while'
loop is placed inside another 'while' loop. This allows us to perform repetitive tasks
within another set of repetitive set. For Example:-
 while (condition1) {  
    // Outer loop body  

    while (condition2) {  
        // Inner loop body  
    }  
} */

#include <stdio.h>

        // We are going to find Average of 4 Students in 3 Subjects.
#include <stdio.h>  

#define N 4  // Define the total number of students as 4  

int main() {  

    int student = 1;  // Variable to keep track of the current student  

    // Outer while loop to iterate through each student  
    while (student <= N) {  

        float avg;       // Variable to store the average marks of the student  
        int sum = 0;     // Variable to store the total marks of the student  
        int sub = 1, marks;  // 'sub' to track the current subject, 'marks' to input marks  

        printf("Marks of Student %d", student);  // Print current student number  

        // Inner while loop to take input for each subject's marks  
        while (sub <= 3) {  // Assuming there are 3 subjects  

        
            printf("\nEnter Marks out of 100 for Subject %d: ", sub);  // Ask for marks of the current subject  
            scanf("%d", &marks);  // Read the marks
            sum += marks;  // Add the marks to the total sum  
            sub++;  // Move to the next subject  
            
        }  

        avg = sum / 3.0f;  // Calculate the average by dividing the sum by 3.0 (for 3 subjects)  
        printf("\nAverage of Student %d is %f out of %d Marks\n\n", student, avg, sum);  // Print the average for the student  
        
        student++;  // Move to the next student  
    }  

    return 0; // Code Success

}