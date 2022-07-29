echo "Enter the limit"
read l
a=1
b=1
c=0
i=1
if [ $l -eq 0 ]
then 
	echo "EMPTY"
else
	echo "FIBANACCI SERIES"
	while [ $i -le $l ]
	do
		echo "$c"
		a=$b
		b=$c
		c=$((a+b))
		i=$((i+1))
	done
fi		
