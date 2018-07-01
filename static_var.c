/* 
Filename : static_var.c
Author   : rp
Created  : Thu 30 May 2013 19:21:32 BST
*/
#include <stdio.h>
int main()
{
  int x;
  dummy();
  printf("%d",x);
  return 0;
}

int dummy(){
  static int x = 1;
  return 0;
}