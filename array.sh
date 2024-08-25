echo "Enter No. Of Subjects :"
read n
echo "Enter Marks of $n Subjects"
for(( i=0; i<n; i++ ))
do
read arr[$i]
done
max=$((arr[0]))
for (( i=1; i<n; i++ ))
do
if [ $max -lt $((arr[$i])) ]
then
max=$((arr[$i]))
fi
done
echo "Highest Marks Is : $max"