echo "Enter First Number : "
read a
echo "Enter Second Number : "
read b
echo "Enter Third Number : "
read c
echo "Entered First Number : $a"
echo "Entered Second Number : $b"
echo "Entered Third Number : $c"
if [ $a -gt $b ]
then
	if [ $a -gt $c ]
	then
	echo "First Number Is Greatest"
	else if [ $b -gt $c ]
	then
	echo "Second Number Is Greatest"
	else
	echo "Third Number Is Greatest"
	fi
	fi
else
	if [ $b -gt $c ]
	then
	echo "Second Number Is Greatest"
	else
	echo "Third Number Is Greatest"
	fi
fi
if [ $a -lt $b ]
then
	if [ $a -lt $c ]
	then
	echo "First Number Is Smallest"
  	else if [ $b -lt $c ]
	then
	echo "Second Number Is Smallest"
	else
	echo "Third Number Is Smallest"
	fi
	fi
else
	if [ $b -lt $c ]
	then
	echo "Second Number Is Smallest"
	else
	echo "Third Number Is Smallest"
	fi
fi
