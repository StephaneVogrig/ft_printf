#!?bin/bash

while true; do
clear
if cc -g *.c -o exe; then
 ./exe
fi

sleep 2
done