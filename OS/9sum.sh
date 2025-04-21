if [ $# -eq 0 ]; then
    echo "Usage: $0 num1 num2 num3 ..."
    exit 1
fi
sum=0
for num in "$@"
do
    if ! [[ "$num" =~ ^[0-9]+$ ]]; then
        echo "Invalid input: $num. Please enter only positive integers."
        exit 1
    fi
    sum=$((sum + num))
done
echo "Summation of given numbers: $sum"

