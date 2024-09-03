/*
Archivo: la_clave.cpp
Autor: federico.barbeetti@correounivalle.edu.co>
Fecha creación: 2024-08-29
Fecha última modificación: 2024-08-29 
Licencia: GNU-GPL
*/

#include<iostream>
#include <string>
using namespace std;

/*
Este programa le solicita al usuario una clave de ingreso
*/

int ayuda(){

    cout<<"La instuccion de ejecucion puede ser asi: ./clave 456 \n\n"<<"Donde 'clave' es el nombre del archivo ejecutable y '456' la clave ingresada\n\n"<<
    "!!! Ejecute de nuevo tomando en cuanta las instrucciones dadas !!!\n\n";


    return 0;
}



int main(int argc, char const *argv[])
{
    string clave_Admin ="123";
    string clave_usuario=" ";

    int contador=0;



    if(argc!=2){

	cout<<"\nDebe ingresar una contraseña numerica de 3 terminos seguidos \n\n"<<
    "EJEMPLO: ./[nombre del archivo ejecutable] [clave numerica de 3 cifras]\n\n";

    ayuda();

	}
    else if (argc==2)
    {
       clave_usuario = argv[1];

       if (clave_Admin==clave_usuario)
       {
        cout<<"\nBIENVENIDO........\n\n";
       }
       else if(clave_Admin!=clave_usuario)
       {
        cout<<"\nCLAVE ERRONEA, usted ingreso "<<clave_usuario<<" intente de nuevo\n\n";

       }
    }
        
    return 0;
    
}  

  