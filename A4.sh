echo -n "Enter the number: "
read n
s=0
p=$n
if [ $n -lt 0 ]
then 	let n*=-1
fi
while [ $n -gt 0 ]
do
	d=`expr $n % 10`
	s=`expr $s \* 10 + $d`
	let n=n\/10
done
if [ $p -lt 0 ]
then 	let s*=-1
fi
echo "Reverse of $p is $s"
