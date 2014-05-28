/* 
Filename : invalid_loop.c
Author   : rp
Created  : Sun Feb  6 13:51:27 SAST 2011
*/
#include <stdio.h>
int main()
{
  int a = 2;
  int b = 0;
  while(a > 1){
    ++b;
    printf(" b = %d\n",b);
    
    if(b == 1000000){
      a = 0;
    }
    
    
  }
  return 0;
}
