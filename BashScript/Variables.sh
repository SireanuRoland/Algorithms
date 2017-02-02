#!/bin/bash


# All variables in shell are just string of characters 



# --------------------- SCALLAR VARIABLES ----------------------------
#All of these variables are scallar variables 
#Variables that can keep a single argument 

#Those are local variables
MYNAME="Sireanu Roland Alexandru"
YOUNAME=SughiBughi
YOURAGE=24

#Environments variable are available to any child process of the shell

echo ${MYNAME}
echo $YOUNAME
echo $YOURAGE

echo "File name of current script is : $0 "
echo "Number of argumets is $#"
echo "All the arguments supplied $@ (as separated arguments)"
echo "All arguments supplied $* (with spaces between arguments)"
echo "Exit status is $?"
echo "Process number of current shell is $$"

# ------------------- END OF SCALLAR VARIABLES -------------------------


# ------------------- ARRAY VARIABLES ----------------------------------


ARRAY=(Eu Tu SiRestulLumii)

echo "${ARRAY[1]}"

unset ARRAY

ARRAY[0]=Roland
ARRAY[1]=Sireanu

echo "${ARRAY[*]}"



