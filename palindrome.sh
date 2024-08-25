echo "Enter a No."
read a
n=$((a))
rev=0
while [ $a -gt 0 ]
do
rem=$((a%10))
rev=$((rev*10+rem))
a=$((a/10))
done
if [ $rev -eq $n ]
then
echo "$n Is Palindrome"
else 
echo "$n Is Not Palindrome"
fi