/*Filename : c
  Author   : rp
  Created  : Mon Feb 13 10:49:24 SAST 2012
*/
#include <stdio.h>
int main(){
  int i;
  for(i=1; i < 101; i++){
    if( ((i % 5)==0) && ((i % 3)== 0) ){
      printf("FizzBuzz\r\n");
    }else if( (i % 5)==0 ){
      printf("Fizz\r\n");
    }else if( (i % 3)==0 ){
      printf("Buzz\r\n");
    }else{
      printf("%d\r\n",i);
    }
  }
  return 0;
}