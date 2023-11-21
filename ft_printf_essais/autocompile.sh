#!/bin/bash

while true; do
  clear
  
 # cc -Wall -Wextra -Werror tests_printf.c -o tests_printf
  cc tests_printf.c -o tests_printf

  ./tests_printf
  sleep 5
done

