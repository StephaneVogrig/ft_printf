#!?bin/bash

while true; do
clear
if clang -g 	unit_test.c \
				nbr_digit.c \
				float64_get.c \
				float64_set.c \
				float_print.c 
				*tests.c -o exe; then
		./exe
fi
sleep 2
done
