// ejercicio 5 unidad 6.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <conio.h>
#include <iostream>
#include <string>
#include "Libro.h"
#include "Persona.h"

using namespace std;

void final() {
	int exp = 0;
	while (exp == 0) {
		if (_kbhit()) {
			char key = _getch();
			char _key = 0;
			if (key == 13) {
				exp = 1;
				system("cls");

			}

		}
	}
}

void finish() {
	cout << endl;
	printf("*Presione %c Enter %c para finalizar", 34, 34);
	final();
}

void menu() {
	cout << "---Bienvenido---" << endl;
	printf("1.- a%cadir libro \n", 164);
	cout << "2.- Editar libro" << endl;
	cout << "3.- Consultar autor" << endl;
	cout << "4.- Consultar datos" << endl;
	cout << "5.- eliminar libro" << endl;
	cout << "6.- cerrar programa" << endl;

}

int main()
{
	Libro libros[11];
	int ciclo = 1, op = 0;
	int contador = 1;
	
	while (ciclo == 1) {
		menu();
		cin >> op;
		system("cls");


		switch (op) {
		//registro
		case 1:
						libros[contador].registro();
						contador += 1;
						cout << "---Registro completado---" << endl;
						finish();
		break;
			//editar libro
		case 2:
						cout << "---edicion---" << endl;
						for (int i = 1; i <= contador-1; i++) {
							cout << i << ".- "; libros[i].titulo();
						}
						cout << "Que libro deseas editar?" << endl;
						cin >> op;
						libros[contador].registro();
						cout << "---edicion completada---" << endl;
						finish();
		break;
		
		case 3:
							cout << "---Consultar autor---" << endl;
							for (int i = 1; i <= contador-1; i++) {
								cout << i << ".- "; libros[i].titulo();
							}
							cout << "De que libro deseas consultar su autor?" << endl;
							cin >> op;
							system("cls");
							cout << "Libro: "; libros[op].titulo();
							libros[op].consult_a();
							finish();
		break;

		case 4:

						cout << "---Consultar datos del libro---"<< endl;
						for (int i = 1; i <= contador-1; i++) {
							cout << i << ".- "; libros[i].titulo();
						}
						cout << "De que libro deseas consultar sus datos?" << endl;
						cin >> op;
						system("cls");
						libros[op].toString();
						finish();



		break;


		case 5:
			cout << "---eliminar libro---" << endl;
			for (int i = 1; i <= contador-1; i++) {
				cout << i << ".- "; libros[i].titulo();
			}
			cout << "De que libro deseas eliminar?" << endl;
			cin >> op;
			system("cls");

			libros[op] = libros[0];
			for (int i = op; i <= contador - 1; i++) {
				if (i < contador - 1) {
					libros[i] = libros[i + 1];
					if (i == contador-1) {
					libros[i] = libros[0];
					}
				}

			}
			contador -= 1;
			cout << "---Libro eliminado y lista de libros actualizada---" << endl;
			cout << "====================================================" << endl;
			cout << "---Nueva lista de libros---" << endl;
			for (int i = 1; i <= contador - 1; i++) {
				cout << i << ".- "; libros[i].titulo();
			}
			finish();


			break;










		case 6:
			cout << "Gracias por utilizar esta estacion automatizada :)" << endl;

			return 0;

		default:
			cout << "opcion no valida, intente con otra opcion " << endl;
			finish();
			break;
		}





	}


	

}

