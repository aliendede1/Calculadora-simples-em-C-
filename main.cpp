#include <iostream>
#include <cmath>
using namespace std;

int main(){
  double v1 = 0;
  double v3 = 0;
  double v2 = 0;
  char operador;
  cout << "Operadores Logicos: "<< " | + | - | / | * | " << endl;
  cout << "Operador: ";
  cin >> operador;
  switch (operador){
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
      if (v2 == 0){
        cout << "0..." << endl;
      } else {
      div = v1 / v2;
      cout << "Divizão: " << div << endl;
      }  
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
      case 'r':
          float a;
          cout << "Raiz de? ";
          cin >> a;
          double raiz1 = sqrt(a);
          cout << "Raiz: "<< raiz1 << endl;
        break;
          
  }
  return 0;
}


