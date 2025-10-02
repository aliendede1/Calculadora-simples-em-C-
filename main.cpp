#include <iostream>
#include <cmath>
using namespace std;

int main(){
  double v1 = 0;
  double v3 = 0;
  double v2 = 0;
  char op;
  cout << "Soma (A+B): + | Sub  (A-B): - | Multiplicação (A*B): * | Divizão (A/B): / | Delta [(B*B)-(4*A*C)]: d | Baskara: B \n";
  cout << "Operador: ";
  cin >> op;
  switch (op){
    case '+':
      float soma;
      cout << "A: ";
      cin >> v1;
      cout << "B: ";
      cin >> v2;
      soma = v1+v2;
      cout << "Soma: " << soma << endl;
        break;
      case '-': 
      float sub;
      cout << "A: ";
      cin >> v1;
      cout << "B: ";
      cin >> v2;
      sub = v1-v2; 
      cout << "Sub: " << sub << endl;
        break;
      case '/':
      float div;
      cout << "A: ";
      cin >> v1;
      cout << "B: ";
      cin >> v2;      
      div = v1 / v2;
      cout << "Divizão: " << div << endl;
        break;
      case '*':
        float mult;
        cout << "A: ";
        cin >> v1;
        cout << "B: ";
        cin >> v2;
        mult = v1*v2;
        cout << "Multiplicação: " << mult << endl;
          break;
      case 'd':
        int delta;
        cout << "A: ";
        cin >> v1;
        cout << "B: ";
        cin >> v2;
        cout << "C: ";
        cin >> v3;
        delta = (v2*v2)-(4*v1*v3);
        cout << delta << endl;
          break;
      case 'B':
          double delt;
          double x1,x2;
          cout << "A: ";
          cin >> v1;
          cout << "B: ";
          cin >> v2;
          cout << "C: ";
          cin >> v3;
          delt = (v2*v2)-(4*v1*v3);
          if (delt <= 0){
            cout << "Não tem como fazer Baskara pois o delta e negativo" << endl;
          } else {
          double raiz = sqrt(delt);
          x1 = (-v2 + raiz)/(2*v1);
          x2 = (-v2 - raiz)/(2*v1);
          cout << "Delta: " << delt << endl;
          cout << "x¹: " << x1 << endl;
          cout << "x²: " << x2 << endl;
          cout << endl;
          }
          break;
  }
  return 0;
}


