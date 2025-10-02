#include <iostream>
#include <cmath>
using namespace std;

int main(){
  double v1 = 0;
  double v3 = 0;
  double v2 = 0;
  char op;
  int rel;
  cout << "Valores" << endl;
  cout << "A = ";
  cin >> v1;
  cout << "B = ";
  cin >> v2;
  cout << "Soma: + | Sub: - | Multiplicação: * | Divizão: / | Delta: d | Baskara: B \n";
  cout << "Operador: ";
  cin >> op;
  switch (op){
    case '+':
      float soma;
      soma = v1+v2;
      cout << "Soma: " << soma << endl;
        break;
      case '-': 
      float sub;
      sub = v1-v2; 
      cout << "Sub: " << sub << endl;
        break;
      case '/':
      float div;
      div = v1 / v2;
      cout << "Divizão: " << div << endl;
        break;
      case '*':
        float mult;
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
      case 'B':
          double delt;
          double x1,x2;
          cout << "C = ";
          cin >> v3;
          delt = (v2*v2)-(4*v1*v3);
          if (delt <= 0){
            cout << "Não tem como fazer Baskara pois o delta e negativo" << endl;
          } else {
          double raiz = sqrt(delt);
          x1 = (-v2 + raiz)/(2*v1);
          x2 = (-v2 - raiz)/(2*v1);
          cout << "Delta: " << delt << endl;
          cout << "X1: " << x1 << endl;
          cout << "X2: " << x2 << endl;
          cout << endl;
          }
          break;
  }
  return 0;
}


