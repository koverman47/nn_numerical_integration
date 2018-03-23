#!/bin/bash


echo "Start Compiling"
g++ -std=c++11 *.cpp -o  a.out
echo "End Compiling"

echo "Start Execution"
./a.out
echo "End Execution"

rm -f a.out
echo "End of Script"
