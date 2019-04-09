#!/bin/sh
a=0
while [ $a -ge 0 ]
do

echo $a

if [ $a -eq 10 ]
#if you remove the break then we will get a infinite while loop!
then
break
fi

a=`expr $a + 1`

done

read -p "stop" 