echo "Enter First Number : "
read a
echo "Enter Second Number : "
read b
echo "Entered First Number : $a"
echo "Entered Second Number : $b"
c=`expr $a`
a=`expr $b`
b=`expr $c`
echo "After Swap First Number : $a"
echo "After Swap Second Number : $b"
