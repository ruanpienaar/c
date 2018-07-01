/* 
Filename : sandbox.c
Author   : rp
Created  : Wed 10 Jul 2013 13:44:41 BST
*/
#include <stdio.h>
int main()
{
  int i = 1;
  printme(&i);
  return 0;
}

int printme(int * ptr){
  printf("%d",*ptr);
  return 0;
}