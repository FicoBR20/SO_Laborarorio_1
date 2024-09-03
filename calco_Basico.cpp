/*
Archivo: cal_factorial.cpp
Autor: federico.barbeetti@correounivalle.edu.co>
Fecha creación: 2024-08-29
Fecha última modificación: 2024-08-29 
Licencia: GNU-GPL
*/

#include<iostream>
#include <string>
using namespace std;

/*
Este programa le solicita al usuario el ingreso de un número
y seguidamente le entrega el factorial de dicho numero
*/

int main(){
    string auxiliar;
    int answer;
    cout <<"Ingrese un numero para calcular su factorial ";
    getline(cin, auxiliar);
    answer=stoi(auxiliar);
    int info = answer;

    int acumula=1;

    while (answer!=1)
    {
        acumula = acumula * answer;
        answer--;
    }

    cout<<"El factorial de "<<to_string(info)<<" es "<<to_string(acumula)<<endl;

    return 0;

}