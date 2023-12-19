#!?bin/bash

while true; do
clear
make
if cc -g main.c libftprintf.a -o exe; then
	./exe
fi

sleep 2
done
