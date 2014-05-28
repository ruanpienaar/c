/*Filename : c
  Author   : rp
  Created  : Wed Feb 15 20:43:09 SAST 2012
*/
#include <stdio.h>
int main(){
  
  int c = 0;
  
 Inclabel: printf("Increment @ Value : %d\n",c);
  c++;
  if(c < 10){
    goto Inclabel;
  }
  printf("Now i am done !\n");
  return 0;
}
