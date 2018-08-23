#!/bin/bash

RES="$(ifconfig | grep "inet " | grep -Fv 127.0.0.1 | cut -c 7- | cut -d" " -f1)"
if [ [$RES == ""] ] 
then 
	echo "I am lost!" 
else
	echo $RES; 
fi


