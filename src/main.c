#include <stdio.h>

void calculations(int * angleA, int * angleB, int * angleC) {
  int missingAng = 0;
  if ( *angleA > 0 && *angleB > 0 && *angleC > 0 ) {
    printf("The angles of your triangle are: %d, %d, and %d \n", *angleA, *angleB, *angleC);
  }
  else if ( *angleA == 0 && *angleB == 0 && *angleC == 0 ) {
    printf("angle(s) A, B, and C are all undefined \n");
  }
  else if ( *angleA == 0 ) {
    printf("angle A has no value \n");
    missingAng = 180 - (*angleB + *angleC);
    printf("Missing angle A is: %d degrees \n", missingAng);
  }
  else if ( *angleB == 0 ) {
    printf("angle B has no value \n");
    missingAng = 180 - (*angleC + *angleA);
    printf("Missing angle B is: %d degrees \n", missingAng);
  }
  else if ( *angleC == 0 ) {
    printf("angle C hase no value \n");
    missingAng = 180 - (*angleA + *angleB);
    printf("Missing angle C is: %d \n", missingAng);
  }
  else {
    printf("No missing value to calculate \n");
  }
}

void checker( int * angleA, int * angleB, int * angleC) {
  while((*angleA + *angleB + *angleC) > 180) {

    printf("The sum of the angle(s) entered is greated then 180 degrees please enter valid angles: ");
    scanf("%d, %d, %d", angleA, angleB, angleC);
    if (*angleA + *angleB + *angleC == 180) {
      printf("Angle entries are compliant with sum of triangles.\n");
      printf("Performing calculations for for missing angle: \n");
    }
  }
}

int main() {
  int  angleA = 0;
  int  angleB = 0;
  int  angleC = 0;

  printf("INSTRUCTIONS: Please input values for three angles. \nIf any given angle is undefined please enter a zero. Program will only except comma seperate values: ");
  scanf("%d, %d, %d", &angleA, &angleB, &angleC); // Desired ability would be to either have the user type undefined or leave the comma position blank for A, B, C
  // Would like condition to be dynamic where the logic is not constrained to the order of A, B, or C. The user doesn't intuitively know what position the commas represent.

  checker(&angleA, &angleB, &angleC);
  calculations(&angleA, &angleB, &angleC);
  return 0;
}
