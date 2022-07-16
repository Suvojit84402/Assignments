#implementing dictionary
ccode={}
mrate=float(input("Enter rate for Monday:"))
ccode["Monday"]=mrate# here we are setting the mrate as the value and Monday as the key

turate=float(input("Enter rate for Tuesday:"))
ccode["Tuesday"]=turate

wrate=float(input("Enter rate for Wednesday:"))
ccode["Wednesday"]=wrate

trate=float(input("Enter rate Thursday:"))
ccode["Thursday"]=trate

frate=float(input("Enter rate for Friday:"))
ccode["Friday"]=frate

srate=float(input("Enter rate for Saturday:"))
ccode["Saturday"]=srate

surate=float(input("Enter rate for Sunrday:"))
ccode["Sunday"]=surate


print("Coupon Codes are:",ccode)
