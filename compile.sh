#!/bin/bash
#set -x
source ~/code/bash/common
rm -rf bin/*.out
if [ -z $1 ]; then 
  SC=`ls| grep ".c" | grep -v '.sh'`
elif [ -n $1 ]; then
  SC=$1
fi

for C in $SC; do
  echo "Compiling $C"
  EX_NAME=`awk_str_sep $C '.' 1`
  gcc $C -o bin/$EX_NAME".out"
done
echo "done"