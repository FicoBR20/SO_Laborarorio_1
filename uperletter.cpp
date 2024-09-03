/*
Archivo: cal_factorial.cpp
Autor: federico.barbeetti@correounivalle.edu.co>
Fecha creación: 2024-08-29
Fecha última modificación: 2024-08-29 
Licencia: GNU-GPL
*/

#include<iostream>
#include<cstring>
#include<cctype>
using namespace std;

/*
Este programa le solicita al usuario el ingreso de una frase
con letras mayusculas y minusculas y entrega la cantidad de ellas.
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