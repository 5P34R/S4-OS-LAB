echo "enter three numbers"
read a b c
big=$a
if [ $big -lt $b ]
then 
      big=$b
fi
if [ $big -lt $c ]
then 
      big=$c
fi
echo "$big is largest among $a,$b,$c "


