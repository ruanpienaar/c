/*Filename : c
  Author   : rp
  Created  : Mon Feb 20 20:29:27 SAST 2012
*/
#include <stdio.h>
int main(){
  
  int weight;
  int height;
  
  printf("Please enter your weight in kilograms ?\n");
  scanf("%d",&weight);
  //printf("Your weight is : %d Kg \n",weight);

  printf("Please enter your height in centimeters ?\n");
  scanf("%d",&height);
  //printf("Your height is : %d Cm \n",height);

  float bmi;
  bmi = body_mass_index(weight,height);
  printf("Your BMI is : %f \n",bmi);
  
  return 0;
}

body_mass_index(int weight, int height){
  // BMI = ( Weight in Kilograms / ( Height in Meters x Height in Meters ) )
  printf("Height %d\n",height);
  printf("Weight %d\n",weight);
  float bmi = ( weight / ( height * height ) );
  printf("BMI : %f \n",bmi);
  return bmi;
}
