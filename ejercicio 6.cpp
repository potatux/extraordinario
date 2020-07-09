#include <iostream>
#include <string>
#include <iostream>
#include <stdlib.h>
#include <math.h>
#include "stdio.h"
#include "conio.h"
#include <time.h>
#include <cstdlib>

using namespace std;

void final() {
	int exp = 0;
	while (exp == 0) {
		if (_kbhit()) {
			char key = _getch();
			char _key = 0;
			cout << "*Presiona Enter para continuar*" << endl;

			if (key == 13) {
				exp = 1;
				system("cls");

			}

		}
	}
}


int random() {
	int r;
	srand(time(NULL));
	r = rand() % 4;
	return r;
}

void dib_i(int x) {
	for (int i = 0; i <= x-1; i++) {

		cout << "_";

	}
	cout << endl;
}

int juego(){
	

	using namespace std;
	int x = 1;

	bool juego = true;
	int vidas = 5;

	char res; 


	string palabras[5] = { "perro","azul","libreta","computadora","dinosaurio" };
	string frase = palabras[random()];
	int tam = frase.length();
	char progre[20];
	int acierto = 0;
	int errors = 0;
	int opcion;


	cout << "intentos: " << vidas << endl;
	dib_i(tam);

	while (juego == true && vidas > 0) {
		cout << "Ingresa la respuesta" << endl;
		cin >> res;

		system("cls");
		

		//comprobar respuesta
		for (int i = 0; i <= tam-1; i++) {

			if (res == frase[i]) {
				acierto += 1;

				if (res == frase[i] && vidas == 5) {
					vidas += 1;
				}


				
				if (vidas > 5) {
					vidas = 5;
				}
				progre[i] = frase[i];
			}


			if (res != frase[i]) {
				errors += 1;
			}
			
		}
		

		cout << endl;
		for (int i = 0; i <= tam - 1; i++) {
			if (progre[i] == ' ') {
				printf("%c",95);
			}
			if (progre[i] != ' ') {
				cout << progre[i];
			}
		}
		cout << endl;
		
		

		if (acierto == tam) {
			juego = false;
			cout << "Felicidades haz ganado :) " << endl;
			cout << "Deseas volver a jugar?" << endl;
			cout << "1)si        2)no" << endl;
			cin >> opcion;
			if (opcion == 2) {
				x = 2;
			}


		}
		
		if (errors == tam) {
			vidas -= 1;
			errors = 0;
		}
		

		if (vidas <= 0) {
			cout << "haz perdido :(" << endl;
			cout << "Deseas volver a jugar" << endl;
			cout << "1)si        2)no" << endl;
			cin >> opcion;
			if (opcion == 2) {
				x = 2;
			}

			
			system("cls");

		}

		cout << "intentos: " << vidas << " errors: " << errors << endl;
		errors = 0;

		
	}

	return x;
}

	
int main()
{
	
	using namespace std;

	
	int ciclo = 1;
	

	while (ciclo == 1) {
		ciclo = juego();
		system("cls");


	}



	
}