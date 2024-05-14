#include <iostream>
using namespace std;
int calculatr(int one, int two, char oper) {
int result;
  if (oper == '*') {
    result = one * two;
  }
  if (oper == '^') {
    result = one ^ two;
  }
  if (oper == '%') {
    result = one % two;
  }
  return result;
}
int main() {
  char oprator;
  int first, second;
  cout << "operator\n";
  cin >> oprator;
  cout << "first number\n";
  cin >> first;
  cout << "second number\n";
  cin >> second;
  cout << "answer: " << calculatr(first, second, oprator) << endl;
  return 0;
}
