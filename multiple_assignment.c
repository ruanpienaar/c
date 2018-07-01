/*Filename : c
  Author   : rp
  Created  : Mon Feb 13 11:11:10 SAST 2012
*/
#include <stdio.h>
int main(){
  
  int a;
  int b;
  int c;
  int d = (a = 10, b = 20, c = 30);
  
  printf("%d \r\n",a);
  printf("%d \r\n",b);
  printf("%d \r\n",c);
  printf("%d \r\n",d);
 
  return 0;
}
