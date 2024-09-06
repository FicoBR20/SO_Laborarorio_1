/*
Archivo: bisiesto_year.cpp
Autor: federico.barbeetti@correounivalle.edu.co>
Fecha creación: 2024-08-29
Fecha última modificación: 2024-08-29
Licencia: GNU-GPL
*/

#include<iostream>
#include <string>
using namespace std;

/*
Este programa le solicita al usuario el ingreso del año de
su nacimiento y le informa si nació en un año bisiesto
*/

int main(){
    string  year;
    int answer;
    cout <<"Ingrese el año de su nacimiento\n";
    getline(cin, year);
    answer=stoi(year);

    if (answer%4==0)
        {
            cout<<"Usted nació en un año BICIESTO\n";
        }

    else{
        
        cout<<"Usted NO nació en un año BICIESTO\n";

        }

    return 0;
}