#!/bin/bash
# This is my first bash script , prepare yourself ...

filename=${0}

MYNAME=${1}
HEAD_SHAKE="*slow head shake*"
NUM_OF_ARGS


echo ${filename}

echo "Number of arguments ${#}";

if [ -n "${1}" ]; then 
	echo "Argument OK!"
else
	echo "Please enter argument "
fi


if [ "$MYNAME" = "Roland" ]; then 
	echo "Salut Roland ";
elif [ "$MYNAME" = "Sireanu" ]; then
	echo $HEAD_SHAKE
else
	echo "Nothing "
fi



###########################################################################
# -l = less than
# -le = less or equal 
# - gt = greater than
# -eq = equal with


number1=22
number2=22

if [ $number1 -le $number2 ]; then

	echo "Number ${number1} is less than ${number2}"

elif [ $number1 -eq $number2 ];  then
	echo "Number $number1 is equal with $number2"

elif [ $number1 -gt $number2 ]; then
	echo "Number $number1 is greater than $number2"

else
	echo " I don't know , go and fuck yourself !"

fi


############################# Functions ####################################
function showNumber()
{

	echo "Number is : $1"

}

###############################################



################################################## for loop ################

echo " Arguments entered :"

for arg in "$@"; do
	showNumber $arg
done



############################################################################

