#!/bin/sh
#take first number
echo "First no.?"
read a

#second number

echo "second number ?"
read b

#The sum
sum=`expr $a + $b`
echo "a + b : $sum"

#the sub

sub=`expr $a - $b`

echo "a-b : $sub"

#multiplication

mul=`expr $a \* $b`


echo "the multiplication is : $mul"

#division

div=`expr $a / $b`


echo "The division is : $div"

#to keep the output visible
read nothing






