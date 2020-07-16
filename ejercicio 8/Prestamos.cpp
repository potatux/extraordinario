
#include <conio.h>
#include <iostream>
#include <string>
#include "Prestamos.h"
using namespace std;





void Prestamos::prestar(int x, int y) {
    if (pelicula_p[y] == 0) {
        usuario[x] = 1;
        pelicula_p[y] = 1;
        cout << "---Pelicula rentada---" << endl;

        return;

    }

    if (pelicula_p[y] == 1) {
        cout << "lo sentimos la pelicula ya ah sido rentada" << endl;
        return;
    }
	
}

int Prestamos::regresar(int x,int y) {
    int cero = 0;
    if (usuario[x] == 1 && pelicula_p[y] == 1) {
        usuario[x] = 0;
        pelicula_p[y] = 0;
        cout << "devolviendo pelicula: ";
        return y;
        }
    
    if (usuario[x] != 1) {
        cout << "Este usuario no tienen ninguna pelicula pendiente de devolver" << endl;
        return cero;

    }


}

int Prestamos::consulta_p(int x) {
    return pelicula_p[x];
}
int Prestamos::consulta_u(int x) {
    return usuario[x];
}


void Prestamos::reajuste_u(int x) {
    int contad_u = 10;
    
        for (int i = x; i <= contad_u ; i++) {
            if (i < contad_u - 1) {
                usuario[x] = usuario[i + 1];
            }

            if (i == contad_u - 1) {
                usuario[i] = usuario[0];
            }
        }

}

void Prestamos::reajuste_p(int x) {
    int contad_u = 10;
    
        for (int i = x; i <= contad_u ; i++) {
            if (i < contad_u - 1) {
                pelicula_p[x] = pelicula_p[i + 1];
            }

            if (i == contad_u - 1) {
                pelicula_p[i] = pelicula_p[0];
            }
        }

}