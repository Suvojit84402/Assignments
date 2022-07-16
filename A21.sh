for file in *
do
	if [ -f $file ]
	then
		echo "$file : Regular file"
	elif [ -d $file ]
	then
		echo "$file : Directory"
	fi
done
