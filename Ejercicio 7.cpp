#include <iostream>
#include <conio.h>
#include <iostream>
#include <string>
#include "Pelicula.h"
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
	printf("1.- a%cadir pelicula \n", 164);
	cout << "2.- Editar datos de pelicula" << endl;
	cout << "3.- Consultar director" << endl;
	cout << "4.- Consultar datos" << endl;
	cout << "5.- eliminar pelicula" << endl;
	cout << "6.- cerrar programa" << endl;

}

int main()
{
	Pelicula peliculas[11];
	int ciclo = 1, op = 0;
	int contador = 1;

	while (ciclo == 1) {
		menu();
		cin >> op;
		system("cls");


		switch (op) {
			//registro
		case 1:
			peliculas[contador].registro();
			contador += 1;
			cout << "---Registro completado---" << endl;
			finish();
			break;
			//editar libro
		case 2:
			cout << "---edicion---" << endl;
			for (int i = 1; i <= contador - 1; i++) {
				cout << i << ".- "; peliculas[i].titulo();
			}
			cout << "Que pelicula deseas editar?" << endl;
			cin >> op;
			peliculas[contador].registro();
			cout << "---edicion completada---" << endl;
			finish();
			break;

		case 3:
			cout << "---Consultar director---" << endl;
			for (int i = 1; i <= contador - 1; i++) {
				cout << i << ".- "; peliculas[i].titulo();
			}
			cout << "De que libro deseas consultar su autor?" << endl;
			cin >> op;
			system("cls");
			cout << "Pelicula: "; peliculas[op].titulo();
			peliculas[op].consult_a();
			finish();
			break;

		case 4:

			cout << "---Consultar informacion---" << endl;
			for (int i = 1; i <= contador - 1; i++) {
				cout << i << ".- "; peliculas[i].titulo();
			}
			cout << "De que pelicula deseas consultar sus datos?" << endl;
			cin >> op;
			system("cls");
			peliculas[op].toString();
			finish();



			break;


		case 5:
			cout << "---eliminar pelicula---" << endl;
			for (int i = 1; i <= contador - 1; i++) {
				cout << i << ".- "; peliculas[i].titulo();
			}
			cout << "Que pelicula deseas eliminar?" << endl;
			cin >> op;
			system("cls");

			
			for (int i = op; i <= contador - 1; i++) {
				if (i < contador - 1) {
					peliculas[i] = peliculas[i + 1];
				}
				if (i == contador-1) {
					peliculas[i] = peliculas[0];
				}
			}

			contador -= 1;
			cout << "---Pelicula eliminado y lista de peliculas actualizada---" << endl;
			cout << "====================================================" << endl;
			cout << "---Nueva lista de peliculas---" << endl;
			for (int i = 1; i <= contador - 1; i++) {
				cout << i << ".- "; peliculas[i].titulo();
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

