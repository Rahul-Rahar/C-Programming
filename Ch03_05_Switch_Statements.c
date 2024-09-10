#include <stdio.h>
  
  /* Switch Case Statements:- a switch statement is a control flow statement that allows a variable to be tested against a list of values, called case labels. It is used to execute one block of code among many based on the value of the expression provided.
  Syntax:- switch (expression) {  
              case value1:  
              // Code to execute if expression equals value1  
              break;  
              case value2:  
              // Code to execute if expression equals value2  
              break;  
              // You can have as many case labels as needed  
            default:  
        // Code to execute if expression doesn't match any case  
}

    break:- The break statement is used inside a switch case to terminate the case once it has been executed. Without break, the program will continue executing the following cases even if they don't match.
  */
  
  
  int main () {
  // Simple Day Check Program using Switch Case Statements
  
  int day; // Integer Variable for Day number input
  printf("Enter Number of Day between 1-7: ");
  scanf("%d", &day); // User input for Variable day
  
    switch (day) {
      case 1:
        printf("Today is Monday\n"); // If entered 1 This will execute
        break; // If the above case is true, break will Stop the Check here.
        
      case 2:
        printf("Today is Tuesday\n");
        break;
        
      case 3:
        printf("Today is Wednesday\n");
        break;
        
      case 4:
        printf("Today is Thursday\n");
        break;
        
      case 5:
        printf("Today is Friday\n");
        break;
        
      case 6:
        printf("Today is Saturday\n");
        break;
        
      case 7:
        printf("Today is Sunday\n");
        break;
        
      default: // If no Case is true, the following code will execute and is optional.
        printf("Wrong Number Entered!\nPlease Enter a valid Number Between 1-7");
    }
  return 0; // Code Success
  
}