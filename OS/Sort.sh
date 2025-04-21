#!/bin/bash

# Taking user input
echo "Enter numbers separated by spaces:"
read -a arr  # Read array from user input

# Getting length of the array
n=${#arr[@]}

echo "Array in original order:"
echo "${arr[*]}"

# Bubble Sort
for ((i = 0; i < n - 1; i++))
do
    for ((j = 0; j < n - i - 1; j++))
    do
        if [ ${arr[j]} -gt ${arr[$((j + 1))]} ]; then
            # Swap elements
            temp=${arr[j]}
            arr[$j]=${arr[$((j + 1))]}
            arr[$((j + 1))]=$temp
        fi
    done
done

echo "Array in sorted order:"
echo "${arr[*]}"
