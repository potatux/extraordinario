
#include <conio.h>
#include <iostream>
#include <string>
#include "Persona.h"
using namespace std;

Persona::Persona(){}


void Persona::registro(){
	
	cout << "ingrese su nombre: ";
	cin >> nombre;
	cout << "ingrese su apellido: ";
	cin >> apellido;
	cout << "ingrese su edad: ";
	cin >> edad;
	cout << "ingrese su peso: ";
	cin >> peso;
	cout << "ingrese su altura: ";
	cin >> altura;


	cout << "Registre su domicilio: ";
	cin.sync();
	getline(cin >> ws, resi);
	
	

	imc = peso / (altura * altura);

	cout << "----Usuario registrado correctamente----" << endl;
}


void Persona::mayor() {
	if (edad <= 17) {
		cout <<"Edad: " <<edad << " es menor de edad" << endl;
	}
	else {
		cout << "Edad: "<<edad <<  " Es mayor de edad" << endl;
	}


}

void Persona::calculo() {
	cout <<"Imc: " <<imc<<" ";

	if (imc < 18.5)
	{
		cout << "Bajo peso" << endl;
	}
	else if (imc > 18.5 and imc <= 24.9)
	{
		cout << "Normal" << endl;
	}
	else if (imc >= 25 and imc <= 29.9) {
		cout << "Sobrepeso" << endl;
	}
	else {
		cout << "Obeso" << endl;
	}
}

void Persona::toString() {
	mayor();
	cout << "Altura: " << altura << endl;
	cout << "Peso: " << peso << endl;
	calculo();
	cout << "Nombre: " << nombre << endl;
	cout << "Apellido: " << apellido << endl;
	cout << "Domicilio: " << resi << endl;

}