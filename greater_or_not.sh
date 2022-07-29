#!/bin/bash

echo "Enter two digits: "
read a 
read b

if [ $a -gt $b ]
then
  echo "$a > $b"
elif [ $b -gt $a ]
then
  echo "$a < $b"
else
  echo "$a = $b"
fi
