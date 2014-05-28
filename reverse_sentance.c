/* 
Filename : enter_sentance.c
Author   : rp
Created  : Tue  2 Jul 2013 10:45:24 BST
*/
#include <stdio.h>
#include <string.h>

int main() {
  char string[255];
  scanf("&s",&string);
  char * pch;
  pch = strtok(string," ");
  printf ("---%s\n",pch);
  while (pch != NULL) {
    printf ("%s\n",pch);
    pch = strtok(NULL," ");
  }
  
  return 0;
}