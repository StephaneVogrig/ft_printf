#!?bin/bash

while true; do
clear
if make; then
	if gcc -g main.c tests/*.c libftprintf.a  -o exe; then
		./exe
	fi
fi
sleep 2
done
