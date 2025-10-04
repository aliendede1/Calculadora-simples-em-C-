#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double v1 = 0, v2 = 0, v3 = 0;
    char operador;
    char continuar;

    do {
        cout << "\nOperadores: | + | - | / | * | r (raiz) | d (delta) | B (Bhaskara) |\n";
        cout << "Operador: ";
        cin >> operador;

        switch (operador) {
        case '+': {
            double soma;
            cout << "A: "; cin >> v1;
            cout << "B: "; cin >> v2;
            soma = v1 + v2;
            cout << "Soma: " << soma << endl;
            break;
        }
        case '-': {
            double sub;
            cout << "A: "; cin >> v1;
            cout << "B: "; cin >> v2;
            sub = v1 - v2;
            cout << "Subtração: " << sub << endl;
            break;
        }
        case '/': {
            double div;
            cout << "A: "; cin >> v1;
            cout << "B: "; cin >> v2;
            if (v2 == 0) {
                cout << "Não é possível dividir por zero." << endl;
            } else {
                div = v1 / v2;
                cout << "Divisão: " << div << endl;
            }
            break;
        }
        case '*': {
            double mult;
            cout << "A: "; cin >> v1;
            cout << "B: "; cin >> v2;
            mult = v1 * v2;
            cout << "Multiplicação: " << mult << endl;
            break;
        }
        case 'd': {
            double delta;
            cout << "A: "; cin >> v1;
            cout << "B: "; cin >> v2;
            cout << "C: "; cin >> v3;
            delta = (v2 * v2) - (4 * v1 * v3);
            cout << "Delta: " << delta << endl;
            break;
        }
        case 'B': {
            double delt, x1, x2;
            cout << "A: "; cin >> v1;
            cout << "B: "; cin >> v2;
            cout << "C: "; cin >> v3;
            delt = (v2 * v2) - (4 * v1 * v3);
            if (delt < 0) {
                cout << "Não é possível fazer Bhaskara, delta negativo." << endl;
            } else {
                double raiz = sqrt(delt);
                x1 = (-v2 + raiz) / (2 * v1);
                x2 = (-v2 - raiz) / (2 * v1);
                cout << "Delta: " << delt << endl;
                cout << "x1: " << x1 << endl;
                cout << "x2: " << x2 << endl;
            }
            break;
        }
        case 'r': {
            double a;
            cout << "Raiz de? ";
            cin >> a;
            if (a < 0) {
                cout << "Não existe raiz real de número negativo." << endl;
            } else {
                double raiz1 = sqrt(a);
                cout << "Raiz: " << raiz1 << endl;
            }
            break;
        }
        default:
            cout << "Operador inválido." << endl;
        }

        cout << "\nDeseja continuar? (s/n): ";
        cin >> continuar;

    } while (continuar == 's' || continuar == 'S');

    cout << "Programa encerrado." << endl;
    return 0;
}

