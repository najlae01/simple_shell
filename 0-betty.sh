#!/bin/bash

shopt -s nullglob

c_files=( *.c )

if [ ${#c_files[@]} -eq 0 ]; then
    echo "No c files found"
else
    for file in "${c_files[@]}"; do
        betty "$file"
    done
fi
