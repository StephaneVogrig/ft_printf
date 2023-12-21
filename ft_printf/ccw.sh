#!?bin/bash

while true; do
clear
norminette
if cc -Wall -Wextra -Werror -g *.c -o exe; then
 ./exe
fi

sleep 2
done