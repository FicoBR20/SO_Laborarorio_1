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

int inicio(){

    cout<<"\nIngrese la clave 123 al ejecutar ./ \n\n";


    return 0;
}



int main(int argc, char const *argv[])
{
    string clave_Admin ="123";
    string clave_usuario=" ";
    
    if(argc!=2){

	cout<<"\nDebe ingresar una contraseña \n\n";

    inicio();

	}
    else if (argc==2)
    {
       clave_usuario = argv[1];

       if (clave_Admin==clave_usuario)
       {
        cout<<"\nBIENVENIDO\n";
       }
       else{
        cout<<"\nCLAVE ERRONEA...intente de nuevo\n\n";
       }
       
    }
        
    return 0;
    
}  

  