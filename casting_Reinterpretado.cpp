/*
Archivo: casting_Reinterpretado.cpp
Autor: federico.barbeetti@correounivalle.edu.co>
Fecha creación: 2024-09-04
Fecha última modificación: 2024-09-04 
Licencia: GNU-GPL
*/

#include <iostream>
#include<string>

using namespace std;


void cast_Reinter(){

    int* ingresado = new int(70); // ASCII 70 -> F

    cout<<"El valor inicial del entero es "<<*ingresado<<endl;

    char* recibe= reinterpret_cast<char*>(ingresado);

    cout<<"El valor de *ingresado es "<<*ingresado<<endl;
    cout<<"El valor de ingresado es "<<ingresado<<endl;
    cout<<"El valor de *recibe es "<<*recibe<<endl;
    cout<<"El valor de recibe es "<<recibe<<endl;
}

/**
 * Reinterpret Cast

Reinterpret Cast se utiliza para convertir un tipo de puntero 
en otro, independientemente de si las clases están relacionadas. 
No comprueba si el tipo de puntero y los datos que señala el 
puntero son los mismos. Por eso, no se debe utilizar la conversión 
de reinterpretación a menos que sea necesario.

Reinterpret Cast se utiliza principalmente para trabajar con bits. 
No devuelve ningún valor. Cambia directamente el tipo de puntero. 
Si se utiliza la conversión de reinterpretación en valores booleanos, 
los valores booleanos se convierten en números enteros: 0 para 
falso y 1 para verdadero.
 */
int main(int argc, char const *argv[])
{
  cast_Reinter();

  return 0;
}
