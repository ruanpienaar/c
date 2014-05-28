#!/bin/bash

if [ -e $1 ]; then
  joe $1
else

  ME=`whoami`
  DATE=`date`

echo "/* 
Filename : $1
Author   : $ME
Created  : $DATE
*/
#include <stdio.h>
int main()
{
  
  return 0;
}" >> $1

  chmod +x $1
  joe $1

fi