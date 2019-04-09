#!/bin/sh
#input a number 
#exm : input 5 then you will geta pattern such as 
#0
#1 0
#2 1 0
#3 2 1 0
#4 3 2 1 0



echo "input number"

read num
a=0
b=0
while [ $a != $num ]

do
b=$a
until [ $b -lt 0 ]
do
echo -n "$b "
b=`expr $b - 1`
done

a=`expr $a + 1`
echo
done

read -p "stop" ns
