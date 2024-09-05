/*
Archivo: casting_Constante.cpp
Autor: federico.barbeetti@correounivalle.edu.co>
Fecha creación: 2024-09-04
Fecha última modificación: 2024-09-04 
Licencia: GNU-GPL
*/

#include <iostream>
#include<string>

using namespace std;
/**
 * funcion que ejecuta el casting constante en la variable
 * constante de tipo double denominada dato1
 */
void cast_const(){

    const double dato1=45.55;
    const double *pdato=&dato1;

    cout<<"El valor inicial de dato1 es; "<<*pdato<<endl;
    /**
     * instruccion que ejecuta el casting constante
     * de la constante de tipo double, mediante otro
     * puntero del mismo tipo double.
     */
    double *pdato2 = const_cast<double*>(pdato);
    *pdato2 = 1229.27;

    //se comprueba el cambio de la constante.
    cout<<"El nuevo valor de dato1 es "<<*pdato<<endl;
}


/**
 * El casting constante es usado para modificar variables constantes
 * bien sea modificando su valor o de facto cambiar su naturaleza
 * constante en el programa.
 * La condicion logica es el puntero que modificara la constante
 * sean del mismo tipo de dato.
 */
int main(int argc, char const *argv[])
{
  cast_const();

  return 0;
}
