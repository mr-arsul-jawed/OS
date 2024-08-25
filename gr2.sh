echo "Enter First Number : "
read a
echo "Enter Second Number : "
read b
echo "Entered First Number : $a"
echo "Entered Second Number : $b"
if [ $a -gt $b ]
then
echo "First Number Is Greater"
else
echo "Second Number Is Greater"
fi
