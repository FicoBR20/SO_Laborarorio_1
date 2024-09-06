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

/**
 * funcion que implementa el casting reinterpretado.
 */
void cast_Reinter(){

    int* ingresado = new int(70); // ASCII 70 -> F

    cout<<"El valor inicial del entero es "<<*ingresado<<endl;

    /**
     * instruccion para el casting.
     * El puntero de tipo char, toma el valor entero
     * del puntero entero que representa un simbolo
     * segun la tabla ASCII corresponde a la letra F
     * mayuscula.
     */
    char* recibe= reinterpret_cast<char*>(ingresado);

    cout<<"El valor de *ingresado es "<<*ingresado<<endl;
    cout<<"El valor de ingresado es "<<ingresado<<endl;
    cout<<"El valor de *recibe es "<<*recibe<<endl;
    cout<<"El valor de recibe es "<<recibe<<endl;
}

/**
 * El casting reinterpretado se utiliza para cambiar un tipo de
 * puntero de una clase, a otro puntero de otra clase, o de otro 
 * tipo de dato. No devuelve ningun valor.
 * En caso de usarse para reinterpretar booleanos, se convierten
 * en numeros enteros asi; 0 para falso; 1 para verdadero.
 */
int main(int argc, char const *argv[])
{
  cast_Reinter();

  return 0;
}
