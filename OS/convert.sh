echo "Enter a positive integer:"
read num
if ! [[ "$num" =~ ^[0-9]+$ ]]; then
    echo "Invalid input! Please enter a positive integer."
    exit 1
fi
hex=$(printf "%X\n" "$num")
echo "Hexadecimal equivalent: $hex"