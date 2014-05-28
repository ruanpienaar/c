/* 
Filename : letter_guessing.c
Author   : rp
Created  : Sun Feb  6 14:14:22 SAST 2011
*/
#include <stdio.h>
int main()
{
  
  char L='G';
  char G;
  
  do{
    printf("Guess the letter \n");
    scanf("%c",&G);
    
    if( G == L ){
      printf("You guessed correctly \n");
      break;
    }else{
      if( G > L ){
        printf("Guess Lower \n");
      }else{
        printf("Guess Higher \n");
      }
    }
  } while( G == L );
  
  return 0;
}



