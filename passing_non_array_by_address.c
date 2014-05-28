/*Filename : c
  Author   : rp
  Created  : Tue Feb 21 20:54:32 SAST 2012
*/
#include <stdio.h>
int main(){
  int initialval=0;
  printf("The initialval was : %d\n",initialval);
  changeme(&initialval);
  printf("after changeme it is: %d\n",initialval);
  return 0;
}


changeme(int *value){
  *value = 10;
}