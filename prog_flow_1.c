/* 
Filename : prog_flow_1.c
Author   : rp
Created  : Tue  9 Jul 2013 09:54:33 BST
*/
#include <stdio.h>

int func1(){
  printf("Func1\n");
  return 0;
}

int main()
{
  func1();
  func2();
  func3();
  func4();
  return 0;
}

int func2(){ 
  printf("Func2\n");
  return 0;
}
int func3(){ 
  printf("Func3\n");
  return 0;
}
int func4(){ 
  printf("Func4\n");
  return 0;
}