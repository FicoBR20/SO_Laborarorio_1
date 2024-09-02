/*
Archivo: power_recursive.cpp
Autor: federico.barbeetti@correounivalle.edu.co>
Fecha creación: 2024-08-29
Fecha última modificación: 2024-08-29 
Licencia: GNU-GPL
*/

#include<iostream>
#include <string>
using namespace std;

/*
Este programa le solicita al usuario el ingreso de 2 datos.
la base y el exponente. Seguidamente le entrega el resultado.
*/

int power( int bas,  int exp){

    int acum=1;

    if (exp==0)
    {
        cout<<"El resultado es "<<acum<<endl;
        return acum;
    }
    
    else if (exp==1)
    {
        cout<<"El resultado es "<<bas<<endl;
        return bas;   
    }

    else
    {
        while (exp>1)
        {
            acum=bas*bas;
            exp--;
            power(acum, exp);
        }


        return acum;
            
    }
        cout<<"El resultado es "<<acum<<endl;
    
}

/*
El dominio de los datos de entrada es:
base -> enteros positivos.
exponente -> enteros positivos y el cero.
*/

int main()
{
    string  aux;
    int base; 
    int exponente;
    cout <<"Ingrese un numero que sera la base\n";
    getline(cin, aux);
    base=stoi(aux);
    cout <<"Ingrese un numero que sera el exponente\n";
    getline(cin, aux);
    exponente=stoi(aux);

    power(base, exponente);


    return 0;
}