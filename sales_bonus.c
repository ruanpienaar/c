/* 
Filename : sales_bonus.c
Author   : rp
Created  : Fri Nov  5 09:53:48 SAST 2010
*/
#include <stdio.h>
#include <string.h>
int main()
{
  int amount;
  int bonus;
  
  printf("enter the amount of sales: ");
  scanf("%d",&amount);
  // printf("You entered %d \n",amount);
  
  ( amount > 10000 ) ? ( bonus = 1000 ) : ( bonus = 500 ) ;
  
  printf("Your bonus was determined as %d\n",bonus);
  
  return 0;
}
