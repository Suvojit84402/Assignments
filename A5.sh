echo -n "Enter login Name= "
read str
line=` cat /etc/passwd | grep "$str" `
echo $line

i="$(cut -d':' -f1<<<"$line")"
echo "User name = $i"
i="$(cut -d':' -f2<<<"$line")"
echo "Encrypted Password = $i"
i="$(cut -d':' -f3<<<"$line")"
echo "User ID = $i"
i="$(cut -d':' -f4<<<"$line")"
echo "Group ID = $i"
i="$(cut -d':' -f5<<<"$line")"
echo "User ID Info = $i"
i="$(cut -d':' -f6<<<"$line")"
echo "User's Home Directory = $i"
i="$(cut -d':' -f7<<<"$line")"
echo "Login Shell = $i"
