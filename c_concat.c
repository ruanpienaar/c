/*Filename : c
  Author   : ruanpienaar
  Created  : Thu 24 May 2018 15:00:16 BST
*/
#include <stdio.h>
#include <string.h>

int main(int argc, char **argv){
    char letter = 'A';
    char abbrletter[2];
    abbrletter[0] = letter;
    abbrletter[1] = '\0';
    
    char src[50];
    char dest[50];
    //char *dest = "ruan";
    
    strcpy(src,  abbrletter);
    strcpy(dest, "");
    
    //int a = strcat(dest, src);
    int a = strlcat(dest, src, strlen(dest)+strlen(src)+1);
    //strcat(dest, src);
    int b = strlcat(dest, src, strlen(dest)+strlen(src)+1);
    
    printf("a : %i\n", a);
    printf("b : %i\n", b);
    
    printf(">%s<", dest);
    
    
    return 0;
}
