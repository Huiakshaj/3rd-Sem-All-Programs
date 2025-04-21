echo "Enter a number:"
read num
sum=0
while [ $num -gt 0 ]
do
    r=$(expr $num % 10)
    sum=$(expr $sum + $r)
    num=$(expr $num / 10)
done
echo "Sum of digits: $sum"