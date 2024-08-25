echo "Enter a No."
read a
flag=0
for (( i=2; i*i<=a; i++ ))
do
if [ $((a%i)) -eq 0 ]
then
flag=1
break
fi
done
if [ $flag -eq 0 ]
then
echo "$a is prime"
else 
echo "$a is not Prime"
fi