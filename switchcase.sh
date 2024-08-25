echo "Enter 1st Value"
read a
echo "Enter 2nd value"
read b
echo "Enter Addition = 1"
echo "Enter Substraction = 2"
echo "Enter Multiplication = 3"
echo "Enter Division = 4"
read c
case $c in
1)
#z=`expr $a + $b`
z=$(( a + b ))
echo "Sum = $z"
;;
2)
#z=`expr $a - $b`
z=$(( a - b ))
echo "Diffrence = $z"
;;
3)
#z=`expr $a \* $b`
z=$(( a * b ))
echo "Product = $z"
;;
4)
#z=`expr $a / $b`
y=$(( a % b ))
#y=`expr $a % $b`
z=$(( a / b ))
echo "Quotioned = $z"
echo "Remainder = $y"
;;
*)
echo "Invalid Operation"
;;
esac
