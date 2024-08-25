echo "Enter Marks : "
read m
if [ $m -le 70 ] && [ $m -gt 0 ]
then
echo "Grade D"
elif [ $m -le 80 ]
then
echo "Gade C"
elif [ $m -le 90 ]
then
echo "Gade B"
elif [ $m -le 100 ]
then
echo "Gade A"
else 
echo "Invalid Input!"
fi
