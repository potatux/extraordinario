
#include <conio.h>
#include <iostream>
#include <string>
#include "Prestamos.h"
#include "Usuarios.h"
#include "Prestamos.h"

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


int main()
{
    int ciclo = 1;
    int ciclo2 = 1;
    int ciclo3 = 1;

    Pelicula peliculas[11];
    Usuarios usuario[11];
    Prestamos presta;
    int contad_u = 1;
    int contad_p = 1;


    int op,num,num2;



    while (ciclo == 1) {
        system("cls");
        ciclo2 = 1;
        cout << "1.- Usuarios   2.-Peliculas   3.- Prestamos   4.- Cerrar programa" << endl;
        cout << "que deseas consultar: ";
        cin >> op;
        system("cls");
        switch (op) {

        //----USUARIOS---
        case 1:
            while (ciclo2 == 1) {
                cout << "1.- Registrar usuario   2.- Editar informacion  3.- Consultar usuario   4.- Eliminar usuario   5.- Salir" << endl;
                cout << "Que desea realizar: "; cin >> op;
                system("cls");

                switch (op) {
                    
                    
                case 1:
                    //---registro usuario---
                    usuario[contad_u].registro();
                    cout << "---Registro completado---" << endl;
                    contad_u += 1;
                    finish();
                    break;

                    //---editar usuario ---
                case 2:
                    cout << "Ingrese su usuario para editar: ";
                    cin >> op;
                    system("cls");
                    usuario[op].registro();
                    finish();
                    break;

                    //---consultar usuario---
                case 3:
                    cout << "---Consultar---" << endl;
                    for (int i = 1; i <= contad_u - 1; i++) {
                        cout << i << ".- "; usuario[i].nombre();
                    }
                    cout << "Ingrese el numero de usuario a consultar" << endl;
                    cin >> op;
                    system("cls");
                    usuario[op].consultar();
                    finish();
                    break;


                    //---eliminar usuario----
                case 4:
                    for (int i = 1; i <= contad_u - 1; i++) {
                        cout << i << ".-"; usuario[i].nombre();
                    }
                    cout << "Que usuario desea eliminar: ";
                    cin >> op;

                    

                    system("cls");

                    if (presta.consulta_u(op) == 1) {
                        cout << "Este usuario no puede ser eliminado debido a que tiene una devolucion pendiente" << endl;
                    }

                    if (presta.consulta_u(op) != 1) {
                        for (int i = op; i <= contad_u - 1; i++) {
                            if (i < contad_u - 1) {
                                usuario[op] = usuario[i + 1];
                            }

                            if (i == contad_u - 1) {
                                usuario[i] = usuario[0];
                            }

                        }
                        contad_u -= 1;
                        presta.reajuste_p(op);
                        cout << "---Lista de usuarios actualizada---" << endl;
                        cout << "---Nueva lista de usuarios---" << endl;
                        for (int i = 1; i <= contad_u - 1; i++) {
                            cout << i << ".-"; usuario[i].nombre();
                        }
                    }


                    
                    finish();
                    break;




                case 5:
                    ciclo2 = 2;
                    break;
                default:
                    cout << "Opcion no valida pruebe con otra opcion";
                    finish();
                    break;
                }


            }
            break;



        //---PELICULAS---
        case 2:
            while (ciclo2 == 1) {
                cout << "1.- Registrar pelicula   2.-Editar Datos   3.- Consultar datos   4.-Eliminar pelicula   5.-Salir" << endl;
                cout << "Que deseas hacer: "; cin >> op;
                system("cls");
                switch (op) {
                    //registro
                case 1:
                    peliculas[contad_p].registrar();
                    contad_p += 1;
                    cout << "---Registro completado---" << endl;
                    finish();
                    break;

                    //Editar
                case 2:
                    cout << "===Editar===" << endl;
                    for (int i = 1; i <= contad_p - 1; i++) {
                        cout << "============" << endl;
                        cout << i << ".- "; peliculas[i].titulo();
                    }

                    cout << "Que pelicula desea editar: "; cin >> op;
                    peliculas[op].registrar();
                    cout << endl;
                    cout << "---Edicion completada---" << endl;
                    finish();
                    break;


                    //consultar
                case 3:
                    cout << "---Consultar---" << endl;
                    for (int i = 1; i <= contad_p - 1; i++) {
                        cout << i << ".- "; peliculas[i].titulo();
                    }
             
                    cout << "Que pelicula desea consultar: "; cin >> op;
                    system("cls");
                    peliculas[op].toString();
                    finish();

                    break;


                    //ELIMINAR
                case 4:
                    cout << "---Eliminar pelicula---" << endl;
                    for (int i = 1; i <= contad_u - 1; i++) {
                        cout << i << ".-"; peliculas[i].titulo();
                    }
                    cout << "Que pelicula desea eliminar: ";
                    cin >> op;
                    system("cls");

                    if (presta.consulta_p(op) == 1) {
                        cout << "Esta pelicula no puede ser eliminada debido a que a sido rentada y debe ser devuelta" << endl;
                    }

                    if (presta.consulta_p(op) != 1) {
                        for (int i = op; i <= contad_p - 1; i++) {
                            if (i < contad_u - 1) {
                                peliculas[op] = peliculas[i + 1];
                            }

                            if (i == contad_u - 1) {
                                peliculas[i] = peliculas[0];
                            }
                        }
                        contad_p -= 1;
                        presta.reajuste_p(op);
                        cout << "---Lista de peliculas actualizada---" << endl;
                        for (int i = 1; i <= contad_p - 1; i++) {
                            cout << i << ".-"; peliculas[i].titulo();
                        }


                    }


                    finish();
                    break;


                    //salir
                case 5:
                    ciclo2 = 2;
                    break;


                default:
                    cout << "Opcion no valida pruebe con otra opcion";
                    finish();
                    break;

                }



            }

            break;


            //---PRESTAMOS---
        case 3:
            while (ciclo2 == 1) {
                ciclo3 = 1;
                cout << "1.- Solicitar prestamo   2.- Devolver prestamo   3.- Salir" << endl;
                cout << "Que desea consultar: "; cin >> op;
                system("cls");


                switch (op) {
                    //prestamo

                case 1:
                    while (ciclo3 == 1) {
                        cout << "---Solicitar pelicula---" << endl;
                        cout << "Ingresa tu numero de usuario: ";
                        cin >> num;

                        cout << "=====================================" << endl;
                        for (int i = 1; i <= contad_p - 1; i++) {
                            cout << i << ".- "; peliculas[i].titulo();
                        }
                        cout << "Que pelicula desea rentar: "; cin >> op;
                        system("cls");
                        presta.prestar(num,op);
                        ciclo3 = 2;
                    }
              
                    finish();
                    break;



                    //devolucion
                case 2:
                    while (ciclo3 == 1) {
                        cout << "---Devolver pelicula---" << endl;
                        cout << "ingrese su numero de usuario: "; cin >> num;
                        cout << "=====================================" << endl;
                        for (int i = 1; i <= contad_p - 1; i++) {
                            cout << i << ".- "; peliculas[i].titulo();
                        }
                        cout << "Que pelicula vas a devolver: "; cin >> op;

                        num2 = presta.regresar(num, op);
                        if (num2 > 0) {
                            peliculas[num].titulo();
                        }

                        ciclo3 = 2;
                    }

                    finish();
                    break;
                    //salir


                case 3:
                    ciclo2 = 2;
                    break;
                default:
                    cout << "Opcion no valida pruebe con otra opcion" << endl;
                    finish();
                    break;

                }
            }


            break;







        case 4:
            cout << "Gracias por utilizar la estacion automatica :) ";

            return 0;
        default:
            system("cls");
            cout << "Opcion no valida pruebe con otra";
            finish();
            break;
        }




    }






}
