def avr(a,b):
    return ((a&b)+(abs((a^b))>>1))
if __name__=="__main__":
    a,b=input('Please Enter two Numbers:')
    print('(a+b)/2=%r'%avr(a,b))

