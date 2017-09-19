#define NULL 0
#include <stdio.h>

int main() {
  int  angleA;
  int  angleB;
  int  angleC;
  int missingAng;

  printf("INSTRUCTIONS: Please input values for three angles. If any given angle is undefined please enter a zero: ");
  scanf("%d, %d, %d", &angleA, &angleB, &angleC);

  if ( angleA > 0 && angleB > 0 && angleC > 0 ) {
    printf("The angles of your triangle are: %d, %d, and %d \n", angleA, angleB, angleC);
  }
  else if ( angleA == NULL ) {
    printf("angle A has no value");
    missingAng = 180 - (int)(angleB + angleC);
  }
  else if ( angleB == NULL ) {
    printf("angle B has no value");
    missingAng = 180 - (angleC + angleA);
  }
  else if ( angleC == NULL ) {
    printf("angle C hase no value");
    missingAng = 180 - (angleA + angleB);
  }
  else {
    printf("No missing value to calculate");
  }
  return 0;
}
