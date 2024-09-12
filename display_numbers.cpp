/*
Archivo: display_numbers.cpp
Autor: federico.barbeetti@correounivalle.edu.co>
Fecha creación: 2024-09-12
Fecha última modificación: 2024-09-12 
Licencia: GNU-GPL
*/


#include<iostream>
#include <string>
#include <vector>
#include <math.h>
#include <sstream> 
#include <bits/stdc++.h> 
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

    return contador;
    
}

/**
 * funcion que genera un vector <int> con los unos y ceros
 * correspondienes a la transformacion de un entero a binario
 */
string fracciones(int x){

    vector <int> receptor(10,0);//recepciona exponentes
    
    int auxiliar =0;//para llenar arreglo
    int vlr_base=x;//asignacion
    string info="";//contenerdor final de unos y ceros del binario
 

    while (vlr_base>=2){
        auxiliar = pot_Dos(vlr_base);
        receptor[auxiliar]=1;
        vlr_base = vlr_base-pow(2, auxiliar);

    }
/**
 * ultimo digito del binario
 */
    if (x%2!=0 || x==1)
    {
        receptor[0]=1;

    }
    reverse(receptor.begin(), receptor.end());// se invierte el orden del contenido

    /**
     * stringstream que recibe el vector <int>
     */
    stringstream ss; 
  
    for (auto it = receptor.begin(); it != receptor.end(); it++) { 
        ss << *it << " "; 
    } 

    info=ss.str();//asignacion final

    cout << info << endl; 

    return info;
    
}

/**
 * Este programa le solicita al usuario el ingreso de un número
 * y seguidamente le entrega la representacion equivalente en 
 * notacion decimal, notacion octal y notacion hexadecimal.
 */

int main(){
    string auxiliar;
    string temporal="";//contiene los binarios

    cout <<"Ingrese ENTER para obtener los numeros binarios del 1 al 10\n";
    getline(cin, auxiliar);

    /**
     * Ciclo de impresion de los numeros primos del 
     * 1 hasta el numero 10
     */
    int i=0;
    while (i<11)
    {
        temporal=fracciones(i);
        i++;
        temporal="";
    }
    


    return 0;

}