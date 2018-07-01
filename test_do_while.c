/* 
Filename : test_do_while.c
Author   : rp
Created  : Sun Feb  6 14:00:51 SAST 2011
*/
#include <stdio.h>
int main()
{
  char ans; 
  do {
    printf("Please enter [Y/N]\n");
    scanf(" %c",&ans);
  } while( (ans != 'Y') && (ans != 'N') );
  return 0;
}
