echo "Enter the year -"
read year

if [ $year -eq 400 ] || ([ $year -ne 100 ] && [ $year -ne 0 ] && [ $(($year % 4)) -eq 0 ])
then
    echo "$year is a leap year."
else
    echo "$year is not a leap year."
fi
