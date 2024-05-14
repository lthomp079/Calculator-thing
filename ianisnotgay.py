import math
def calculatr(one, two, oper):
  if oper == '*':
    result = one * two
  elif oper == '^':
    result = pow(one, two)
  elif oper == '%':
    result = one % two
  
  return result
#MAIN FUNCTION DONT MESS UP PLZ IAN
operator = input("operator")
first = input("first number")
second = input("second number")
first = int(first)
second = int(second)
myresult = calculatr(first, second, operator)
print(myresult)
