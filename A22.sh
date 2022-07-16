echo "The PATH is : "
echo "$PATH"
#command to count number of lines in PATH
#tr command replaces ":" by "\n"
no_line=`echo "$PATH" | tr ":" "\n" | wc -l`
echo "Number of Paths : $no_line"
#access each path
i=1
#cd /
while [ $i -le $no_line ]
do
curr_path=`echo "$PATH" | cut -d":" -f$i`
echo "PATH$i => $curr_path"
#command to coundno of lines after replaceing "\| by "\n"
val=`echo "$curr_path" | tr "/" "\n" | wc -l`
j=2
str=""
#loop to acces subdirectories
while [ $j -le $val ]
do
dir=`echo "$curr_path" | cut -d "/" -f $j`
echo "Directory Name= $dir"
#string appending to access the required path
str+="/"
str+=$dir
permission=`stat $str | grep "Access" | head -n 1 | cut -d" " -f2`
modification_time=`stat $str | grep "Modify" | cut -d" " -f2-4`
echo "Permission:$permission"
echo "Modification Time:$modification_time"
let j=j+1
done
let i=i+1
done