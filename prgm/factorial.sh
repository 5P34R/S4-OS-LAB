
echo "Enter the number"
read num
fact=1
while [ $num -gt 0 ]
do
	fact=$((fact*num))
	num=$((num - 1))
done
echo "Factorial = $fact"
