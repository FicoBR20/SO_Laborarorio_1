/*
Archivo: display_numbers.cpp
Autor: federico.barbeetti@correounivalle.edu.co>
Fecha creación: 2024-09-05
Fecha última modificación: 2024-09-05 
Licencia: GNU-GPL
*/

#include<iostream>
#include <string>
#include <vector>
#include <math.h>
//#include <cmath>
using namespace std;
/**
 * funcion que entrega el mayor exponente de factores de 2
 * que contiene x.
 * TAL CUAL como log2(x)
 * x <= pow(2, [pot_Dos(x)]) 
 *                  |---> valor que entrega esta funcion.
 */
int pot_Dos(int x){//x>0

    int contador=1;//acumula cantidad de exponentes en base 2
    int auxiliar = x;//auxiliar para implementacion

    while (auxiliar/2 != 1)
    {
        auxiliar=auxiliar/2;
        contador ++;
    }
   // cout<<"El numero "<<x<<" tiene "<<contador<<" potencias de dos\n";

    return contador;
    
}

vector <int> fracciones(int x){

    vector <int> receptor;//recepciona exponentes
    int auxiliar =0;//para llenar arreglo
    int vlr_base=x;//asignacion


    while (vlr_base>=2){
        auxiliar = pot_Dos(vlr_base);
        cout<<"El numero "<<vlr_base<<
        " se puede expresar como pow(2,"<<auxiliar<<") "<<endl;
        receptor.push_back(auxiliar);
        vlr_base = vlr_base-pow(2, auxiliar);

    }

    for(int comp : receptor){
        cout<<"El vector de exponentes es "<<comp<<endl;
    }

    vector<int>binarios (receptor.size()+1, 0);//contiene el binario de x

    for(int comp : binarios){
        cout<<"El vector de binarios es "<<comp<<endl;
    }
    cout<<" diferencia quedo valiendo "<<vlr_base<<endl;

    

    return receptor;
    
}

/**
 * Este programa le solicita al usuario el ingreso de un número
 * y seguidamente le entrega la representacion equivalente en 
 * notacion decimal, notacion octal y notacion hexadecimal.
 */

int main(){
    string auxiliar;
    int answer;
    cout <<"Ingrese el numero entero a expresar ";
    getline(cin, auxiliar);
    answer=stoi(auxiliar);
    int info = answer;

    fracciones(answer);




    // cout<<"La representacion decimal de "<<answer<<" es: "<<endl;
    // cout<<"La representacion octal de "<<answer<<" es: "<<endl;
    // cout<<"La representacion hexadecimal de "<<answer<<" es: "<<endl;


    return 0;

}