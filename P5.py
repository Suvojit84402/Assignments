def fibonaccigenerator():
    a,b=0,1
    while a<10:
        yield b
        a,b=b,a+b
result=fibonaccigenerator()
print("The first seven fibonacci numbers are:",end="  ")
for i in result:
    print(i,end="  ")
