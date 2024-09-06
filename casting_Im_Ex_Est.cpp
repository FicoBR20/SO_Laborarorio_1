/*
Archivo: casting_Im_Ex_Est.cpp
Autor: federico.barbeetti@correounivalle.edu.co>
Fecha creación: 2024-09-04
Fecha última modificación: 2024-09-04 
Licencia: GNU-GPL
*/

#include<iostream>
#include <string>
using namespace std;

/** 
 * funcion que presenta el casting implicito.
 * lo ejecuta el compilador bajo sus reglas.
 */
void implicito(){

    int int_declarado;
    float definido= 31.72 * 25.64;

    int_declarado = definido;

    cout<<"CASTING IMPLICITO\n================="<<endl;

    cout<<"El entero vale "<<int_declarado<<" el float vale "<<definido<<"\n"<<endl;

}
/**
 * funcion que presenta el casting explicito usando el
 * operador de asignacion.
 * usa notacion de casting y tambien notacion de funcion.
 */
void explicito_Ass_Ope(){

    char letra = 'y'; //tiene un valor entero asignado en la tabla ASCII
    int indefinido;

    cout<<"CASTING EXPLICITO - \n================="<<endl;
    indefinido = (int)letra; //notacion de casting
    cout<<"el valor de letra es "<<letra<<" el valor del entero indefinido es "<<indefinido<<endl;

    int definido = 33;
    float porSaber;

    porSaber=float(definido)/2; // notacion de funcion.
    cout<<"\nel vaor de la variable entera es "<<definido<<
    " el valor de la variable float es "<<porSaber<<endl;



}
/**
 * funcion que presenta un ejemplo para el casting static,
 * se ejecuta en tiempo de compilacion, no se chequea en 
 * tiempo de ejecucion. se debe estar muuy seguro.
 * Los tipos de datos deben ser compactibles, ejemplo aqui NO
 * funcionan variables tipo char con variables tipo enteros.
 */
void caStatico(){

    double existe = 22.7 * 55.9;

    cout<<"CASO STATIC CAST\n================="<<endl;

    cout<<"el valor incial es "<<existe<<endl;

    int indefinido;

    indefinido = static_cast <int>(existe);

    cout<<"despues del static cast vale "<<indefinido<<"\n"<<endl;


}

/*
Este programa muestra los distintos casos de casting implicito, 
explicito y estatico.
*/
int main(int argc, char const *argv[])
{
    implicito();
    explicito_Ass_Ope();
    caStatico();


    return 0;
}
