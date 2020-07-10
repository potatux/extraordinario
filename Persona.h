#pragma once


#include <conio.h>
#include <iostream>
#include <string>

using namespace std;

class Persona
{
	private:

		int edad;
		float peso;
		float altura;
		float imc;
		char nombre [120];
		char apellido [120];
		string resi;

	public:
		Persona();
		void calculo();
		void mayor();
		void registro();
		void toString();



};

