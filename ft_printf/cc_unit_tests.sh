#!?bin/bash

while true; do
clear
if make; then
	if clang -g unit_test.c \
				nbr_digit_ui.c \
				float64_get.c \
				float64_set.c \
				float_print.c \
				*tests.c -o exe; then
		./exe
	fi
fi
sleep 2
done
