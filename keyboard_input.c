/*Filename : c
*  Author   : rp
*  Created  : Tue Feb 21 20:58:06 SAST 2012
*/
#include <stdio.h>
int main(){
  //char char_array[100];

  // here we dont need an & , because arrays are always passed with address, and not copy
  //printf("Enter value:\n");
  //scanf("%s",char_array);
  //printf("You entered : %s\n",char_array);
  
  // here we do need an ampersan, and im going to test what happenes when i dont supply one.
  //int number;
  //printf("enter a number between 1 and 1000\r\n");
  //scanf("%d",number);      // NOTICE , no & with number,
  
  // it actually also prints me a warning ! :)
  // keyboard_input.c:17: warning: format ‘%d’ expects type ‘int *’, but argument 2 has type ‘int’
  // its becasue the internals of scanf is using *number. :D
  
  //printf("I Hope i remembered your number, was it : %d",number);

  //Enter value:
  //ruan
  //You entered : ruan
  //enter a number between 1 and 1000
  //10
  //Segmentation fault: 11
  
  
  char key;
  key=getchar();
  printf("Your char was %c\n", key);
  
  
  return 0;
}
