echo "Enter the Basic Salary:"
read basic
echo "Enter the Salary slip is:"
echo -n "HRA = "
echo "scale=2;$basic*0.25" | bc
echo -n "DA = "
echo "scale=2;$basic*0.75" | bc
echo -n "PF = "
echo "scale=2;$basic*0.12" | bc
echo -n "Net Salary = "
echo "scale=2;$basic+$basic*0.25+$basic*0.75-$basic*0.12" |bc
