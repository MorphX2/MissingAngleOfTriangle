#define NULL 0
#include <stdio.h>

int main() {
  int  angleA;
  int  angleB;
  int  angleC;
  int missingAng;

  printf("INSTRUCTIONS: Please input values for three angles. \nIf any given angle is undefined please enter a zero. Program will only except comma seperate values: ");
  scanf("%d, %d, %d", &angleA, &angleB, &angleC); // Desired ability would be to either have the user type undefined or leave the comma position blank for A, B, C
  // Would like condition to be dynamic where the logic is not constrained to the order of A, B, or C. The user doesn't intuitively know what position the commas represent.
  if ( angleA > 0 && angleB > 0 && angleC > 0 ) {
    printf("The angles of your triangle are: %d, %d, and %d \n", angleA, angleB, angleC);
  }
  else if ( angleA == NULL ) {
    printf("angle A has no value \n");
    missingAng = 180 - (int)(angleB + angleC);
    printf("Missing angle A is: %d degrees \n", missingAng);
  }
  else if ( angleB == NULL ) {
    printf("angle B has no value \n");
    missingAng = 180 - (angleC + angleA);
    printf("Missing angle B is: %d degrees \n", missingAng);
  }
  else if ( angleC == NULL ) {
    printf("angle C hase no value \n");
    missingAng = 180 - (angleA + angleB);
    printf("Missing angle C is: %d \n", missingAng);
  }
  else {
    printf("No missing value to calculate \n");
  }
  return 0;
}
