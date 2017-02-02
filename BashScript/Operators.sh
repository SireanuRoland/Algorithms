#!/bin/bash

# --------------- ARITHMETIC OPERATORS ---------------------

opp1=10
opp2=5
result=0

result=`expr $opp1 + $opp2`
echo ${result}

result=`expr $opp1 \* $opp2`
echo ${result}

result=`expr $opp1 / $opp2`
echo ${result}

result=`expr $opp1 % $opp2`
echo ${result}

if [ $opp1 == $opp2 ]; then
	echo "Same values";
else
	echo "Not same values "
fi 


# --------------------- END -----------------------------------




# --------------- RELATIONAL OPERATORS ------------------------
# These relationals operators can be applied only on numeric values

if [ $opp1 -eq $opp2 ]; then
	echo "Values are equal"
else
	echo "Values are not equal"
fi


if [ $opp1 -ne $opp2 ]; then
	echo "Values are not the same "
else
	echo " Values are the same "
fi


if [ $opp2 -lt $opp1 ]; then
	echo "Opp2 < Opp1"
else
	echo "Opp2 > Opp1"
fi

if [ $opp1 -gt $opp2 ]; then
	echo "Opp1 is greater than Opp2"
fi

if [ $opp1 -ge $opp2 ]; then 
	echo "Opp1 is greater or equal with Opp2"
fi

# --------------------- END -----------------------------------



# ----------------------- BOOLEAN OPERATORS -------------------
if [ !false ]; then 
	echo "NOT false means TRUE :D , ye I am a genius !"
fi

#This is OR operator
if [ $Opp1 -gt $Opp2 -o $Opp1 -eq $Opp2 ]; then
	echo "Opp1 >= Opp2"
fi

#This is AND operator
if [ $Opp1 -gt $Opp2 -a $Opp1 -eq $Opp2 ]; then
	echo "Opp1 >= Opp2"
fi

# ---------------------- END ----------------------------------




# ------------------- STRING OPERATORS ------------------------
string1=Fistic
string2=Alune

if [ $string1 = $string2 ]; then
	echo "$string1 = $string2"
else
	echo "$string1 != $string2"
fi

if [ $string1 != $string2 ]; then
	echo "$string1 != $string2"
else
	echo "$string1 = $string2"
fi

if [ -z $string1 ]; then 
	echo "length of string is 0"
else
	echo "length of string is NOT 0"
fi

if [ -n $string1 ]; then 
	echo "length of string is NOT 0"
else
	echo "length of string is 0"
fi

if [ $string1 ]; then
	echo "$string1 is not null"
else
	echo "$string1 is null"
fi

# ----------------------- END ---------------------------------



