/*Filename : c
  Author   : ruanpienaar
  Created  : Tue  9 Jan 2018 18:38:18 GMT
*/
#include <stdio.h>
int main(int argc, char **argv){
  if( argv[1] == '\0' ){
      printf("Why you give me nothing...\n");
  } else {
      printf("ARG WAS %s\n", argv[1]);
  }
}
