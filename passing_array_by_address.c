/* 
Filename : passing_array_by_address.c
Author   : rp
Created  : Mon 29 Jul 2013 09:36:50 BST
*/
#include <stdio.h>
int main()
{
  char name[4] = "ruan";
  changeit(name);
  printf("%s",name);
  return 0;
}

changeit(char name[]){
  name = "Dude";
  return 0;
}