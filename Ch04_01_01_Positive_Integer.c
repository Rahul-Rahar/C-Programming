/* A Program to Ensure that the User Enters only Positive Integer, 
and If User Enters a Positive Number then, Output is the Numbers Square */

#include <stdio.h>
  
  int main() {
  
  long num; // Long Data Type for Square of Big Numbers
  
  printf("Please Enter a Positive Integer: "); // Prompt for the User to Entering a Positive Integer
  
  scanf("%ld", &num); // User Input Code
  
    while (num<=0) { // If the Entered Integer is Negative or Equals to Zero
      
      printf("Please Enter Positive Integer only!\n");
      scanf("%ld", &num); // Loop for the Integer is Negative or Equal to Zero
    }
  
  // If Enetred Integer is Positive
   long square = num*num; // Variable for Squaring the Positive Number
  
    printf("The Square of the Number %ld is: %ld\n", num,square); // Output Command for Square of the Integer
  
    return 0; // Code Success
  
  
}