/* 
Filename : reverse_string.c
Author   : rp
Created  : Mon 17 Jun 2013 16:17:38 BST
*/
#include <stdio.h>
#include <string.h>
int main()
{
  char string[5];
  printf("Enter a string:\n");
  scanf("%s",string);
  int a = 0;
  int length = strlen(string);
  for(a; a < length; a++){
    printf("%c",string[length-(a+1)]);
  }
  printf("\n");
  return 0;
}
