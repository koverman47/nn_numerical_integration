#!/bin/bash


echo "Start Compiling"
g++ $1 -o  a.out
echo "End Compiling"

echo "Start Execution"
./a.out
echo "End Execution"

rm -f a.out
echo "End of Script"
