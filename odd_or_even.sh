#!/bin/bash

echo "Enter the digit:"
read num
if [ $((num%2)) -eq 0 ]
then
   echo "even"
else
  echo "odd"

fi
