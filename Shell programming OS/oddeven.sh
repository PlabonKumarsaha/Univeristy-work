#!/bin/sh
#take  number input
echo "input no"
read num

#keep the reminder of the value ..if the number is divided by 2 then the number is even else odd
rem=$(($num % 2))

if [ $rem -eq 0 ]
then 
echo "the number is even"

else
echo "the number is odd"
fi

#to keep the output visible
read nothing






