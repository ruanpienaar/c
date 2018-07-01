/* 
Filename : func_time.c
Author   : rp
Created  : Wed 29 May 2013 20:38:26 BST
*/
#include <stdio.h>
int main()
{
  int num = double_num(1);
  num = halve_num(num);
  printf("%d",num);
  return 0;
}

int double_num(int num){
  return num * 2;
}

int halve_num(int num){
  return num / 2;
}