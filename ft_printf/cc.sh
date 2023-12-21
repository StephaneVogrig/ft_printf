#!?bin/bash

while true; do
clear
if make; then
	if cc -g main.c libftprintf.a -o exe; then
		./exe
	fi
fi
sleep 2
done
