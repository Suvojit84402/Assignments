echo -n "Enter a 5 digit number:"
read num
p=$num

if [ $num -lt 0 ]
then
let num=num*-1
fi

if [ $num -le 9999 -o $num -gt 99999 ]
then
echo "$p is not a 5 digit number"
else
sum=0

while [ $num -gt 0 ]
do
let rem=num%10
let sum=sum+rem
let num/=10
done
echo "Sum of the digits of number $p is: $sum"
fi