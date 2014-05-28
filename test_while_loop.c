/* 
Filename : test_while_loop.c
Author   : rp
Created  : Sun Feb  6 13:21:59 SAST 2011
*/
#include <stdio.h>
int main()
{
  char ans;
  printf("Please enter 1 [Y/N]\n");
  scanf(" %c",&ans);
  
  while( (ans != 'Y') && (ans != 'N') ){
    printf("Please enter 2 [Y/N]\n");
    scanf(" %c",&ans);
  }
  
  return 0;
}
