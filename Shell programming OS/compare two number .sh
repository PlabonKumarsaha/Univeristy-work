#!/bin/sh
echo "enter two numbers"

read a
read b

if [ $a == $b ]
then
   echo "a is equal to b"
fi

if [ $a != $b ]
then
   echo "a is not equal to b"
fi

#to keep the output visible
read nothing