#to show vendor id

cat /proc/cpuinfo|grep -m1 'vendor_id'

#to show model name

cat /proc/cpuinfo|grep -m1 'model name'

#to show cpu MHz

cat /proc/cpuinfo|grep -m1 'cpu MHz'

#to show cache size

cat /proc/cpuinfo|grep -m1 'cache size'
