#include <iostream>
using namespace std;
int calculatr(int one, int two, char oper) {
int result;
  if (oper == '*') {
    result = one * two;
  }
  else if (oper == '^') {
    result = one ^ two;
  }
  else if (oper == '%') {
    result = one % two;
  }

    
  
