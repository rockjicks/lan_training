def addc (a,b):
    return (a|b)+(a&b)
if __name__=="__main__":
    a,b=input('Please Enter two numbers:')
    print("a+b=%r"%addc(a,b))
