#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "word_count.h"

int main(int argc, char *argv[] ){
    for (int i = 0; i < argc; i++){
        printf("ARG %d %s\n", i, argv[i]);
    }
}