echo "Enter the length of the rectangle :"
read a
echo "Enter the breath of the rectangle :"
read b
echo -n "Area  = "
echo "scale=2;$a * $b " | bc
echo -n "Perimeter= "
echo "scale=2;2 * ( $a + $b ) " | bc
