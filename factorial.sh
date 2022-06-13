#!/bin/bash

echo -n "Enter the value:"
read a

i=1

fact=1

while [ $a -gt $i ]
do
	fact=$((fact*a))
	a=$((a-1))
done

echo "$fact"
