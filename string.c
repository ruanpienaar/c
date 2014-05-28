/* 
Filename : string.c
Author   : rp
Created  : Fri Jul  9 10:43:49 SAST 2010
*/
#include <stdio.h>
#include <string.h>

int main()
{
  char str[1000] = "ruan";
  printf("%s\n",str);
  
  char petname[10];
  petname[0] = 'R';
  petname[1] = 'o';
  petname[2] = 'c';
  petname[3] = 'o';
  printf("%s\n",petname);
  
  char string[10];
  strcpy(string,"bla");
  printf("%s\n",string);
  
  return 0;
}
