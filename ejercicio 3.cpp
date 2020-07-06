
#include <iostream>
#include <string>
#include <iostream>
#include <stdlib.h>
#include <math.h>
#include "stdio.h"
#include "conio.h"

int suma(int x1, int x2) {
    int c;
    c = (x1 + x2);
    return c;
}

int resta(int x1, int x2) {
    int c;

    c = x1 - x2;

    return c;
}

int multiplicasion(int x1, int x2) {
    int c;
    c = x1 * x2;
    return c;
}

int division(int x1, int x2) {
    int c;
    c = x1 / x2;
    return c;
}

int main()
{
    int x1, x2;
    int opcion = 0;
    int opcion2;
    int resultado;
    using namespace std;


    while (opcion < 255) {

        cout << "Que opcion desea ejecutar" << endl;
        cout << "1) Suma   2) Resta  3) Multiplicacion  4) Division 5) Terminar programa" << endl;
        cin >> opcion;

        system("cls");

        switch (opcion) {
        case 1:
            cout << "ingrese primer valor" << endl;
            cin >> x1;
            cout << "ingrese el segundo valor" << endl;
            cin >> x2;
            resultado = suma(x1, x2);
            cout << "El resultado es :" << resultado << endl;
            cout << endl;
            cout << "Desea finalizar el programa?" << endl;
            cout << "1) no               2) si" << endl;
            cin >> opcion2;
            if (opcion2 == 2) {
                return 0;
            }
            system("cls");


            break;
        case 2:
            cout << "ingrese primer valor" << endl;
            cin >> x1;
            cout << "ingrese el segundo valor" << endl;
            cin >> x2;
            resultado = resta(x1, x2);
            cout << "El resultado es :" << resultado << endl;
            cout << endl;
            cout << "Desea finalizar el programa?" << endl;
            cout << "1) no               2) si" << endl;
            cin >> opcion2;
            if (opcion2 == 2) {
                return 0;
            }
            system("cls");

            break;
        case 3:
            cout << "ingrese primer valor" << endl;
            cin >> x1;
            cout << "ingrese el segundo valor" << endl;
            cin >> x2;
            resultado = multiplicasion(x1, x2);
            cout << "El resultado es :" << resultado << endl;
            cout << endl;
            cout << "Desea finalizar el programa?" << endl;
            cout << "1) no               2) si" << endl;
            cin >> opcion2;
            if (opcion2 == 2) {
                return 0;
            }
            system("cls");
            break;
        case 4:
            cout << "ingrese primer valor" << endl;
            cin >> x1;
            cout << "ingrese el segundo valor" << endl;
            cin >> x2;
            resultado = division(x1, x2);
            cout << "El resultado es :" << resultado << endl;
            cout << endl;
            cout << "Desea finalizar el programa?" << endl;
            cout << "1) no               2) si" << endl;
            cin >> opcion2;
            if (opcion2 == 2) {
                return 0;
            }
            system("cls");
            break;
        default:
            return 0;

        }
    }
}

