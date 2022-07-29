clear
sum=0
i="y"

echo "Enter the first number"
read n1
echo "Enter the second number"
read n2
while [ $i="y" ]
do
echo "1.Addition"
echo "2.Subtraction"
echo "3.Multiplication"
echo "4.Division"
echo "Enter your choice"
read ch
case $ch in
	1)sum=$(($n1+$n2))
	echo "Sum ="$sum;;
	2)sum=$(($n1-$n2))
	echo "Sub ="$sum;;
	3)sum=$(($n1*$n2))
	echo "Mul ="$sum;;
	4)sum=$(($n1/$n2))
	echo "Div ="$sum;;
	*)echo "Invalid choice";;
     esac
     echo "Do you want to continue?"
     read i
     if [ $i != "y" ]
     then 
     	  exit
    fi
    done 	  

