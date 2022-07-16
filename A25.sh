if [ $# -lt 1 ]
then
	echo "Too few Arguments."
	exit
fi
echo "Storage in Bytes:"
for i in $*
do
	du -b $i
done
echo "Storage in Kilobytes:"
for i in $*
do
	du -k $i
done
echo "Storage in Megabytes:"
for i in $*
do
	du -m $i
done
