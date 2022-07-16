import re
  
def isValid(s):

	Pattern = re.compile("(0|91)?[-\s]?[6-9]\d{9}")
	return Pattern.match(s)
  
#valid no is that which (a) starts with 0 or 91 (b) has starting digits from 6 to 9 and has (c)9 digits after that
s = input("Enter the phone number to be checked:")
if (isValid(s)): 
	print ("Valid Phone Number")     
else :
	print ("Invalid Phone Number") 
