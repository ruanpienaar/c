/* 
Filename : pointer_fun.c
Author   : rp
Created  : Tue  9 Jul 2013 14:51:15 BST
*/
#include <stdio.h>
int main()
{
  int var = 1;
  int *var_ptr = &var;
  
  printf("var:%d\n",var);
  printf("var_ptr:%d\n",*var_ptr);
  
  var = 2;
  
  printf("var:%d\n",var);
  printf("var_ptr:%d\n",*var_ptr);
  
  return 0;
}
