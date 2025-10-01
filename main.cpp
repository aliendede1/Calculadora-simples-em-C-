#include <iostream>
#include <cmath>
using namespace std;

int main(){
  int v1 = 0;
  int v3 = 0;
  int v2 = 0;
  char op;
  int rel;
  cout << "Valores" << endl;
  cout << "A = ";
  cin >> v1;
  cout << "B = ";
  cin >> v2;
  cout << "Soma: + | Sub: - | Multiplicação: * | Divizão: / | Delta: d |  \n";
  cout << "Operador: ";
  cin >> op;
  switch (op){
    case '+':
      int soma;
      soma = v1+v2;
      cout << "Soma: " << soma << endl;
        break;
      case '-': 
      int sub;
      sub = v1-v2; 
      cout << "Sub: " << sub << endl;
        break;
      case '/':
      float div;
      div = v1 / v2;
      cout << "Divizão: " << div << endl;
        break;
      case '*':
        int mult;
        mult = v1*v2;
        cout << "Multiplicação: " << mult << endl;
          break;
      case 'd':
        int delta;
        cout << "C = ";
        cin >> v3;
        delta = (v2*v2)-(4*v1*v3);
        cout << delta << endl;
          break;
  }
  return 0;
}


