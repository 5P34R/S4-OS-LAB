#/bin/bash

echo "Enter the number: "
read num

flag=0

while test $i -le `expr $num / 2`
do
  if test `expr $num % $i` -eq 0
  then
    flag=1
  fi

  i = `expr $i + 1`
done 

if test $flag -eq 1
then
  echo "Number is not prime"
else
  echo "Number is prime"
fi

