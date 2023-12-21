#!/bin/bash

while true; do
  clear
  
 # cc -Wall -Wextra -Werror tests_printf.c -o tests_printf
if cc tests_printf.c -o tests_printf; then

  ./tests_printf
fi

  sleep 1
done

