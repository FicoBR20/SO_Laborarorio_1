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
using namespace std;
/**
 * funcion que entrega el mayor exponente de factores de 2
 * que contiene x.
 * int x -> n factores de 2;
 * ejemplos;
 * 87 -> tiene 6 factores de 2
 * 16 -> tiene 4 factores de 2
 * 
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

/**
 * funcion que entrega un vector con ceros y unos que 
 * representan el codigo binario de un numero entero
 * ingresado.
 * int x ->... 0 1 0 0 0 1 0 ....
 */
vector <int> fracciones(int x){

    vector <int> receptor;//recepciona exponentes
    int auxiliar =0;//para llenar arreglo
    /**
     * se le asigna inicialmente el x original, luego tomara
     * sucesivamente valores de los residuos, hasta reducirse
     * a 1 o a 0.
     */
    int vlr_base=x;//asignacion, se reducira hasta 1 o 0;

    /***
     * ciclo que llena en vector receptor con los
     * valores de las potencias de 2 aplicadas al
     * numero n y a sus residuos hasta reducirlos 
     * a 2
     */
    while (vlr_base>=2){
        auxiliar = pot_Dos(vlr_base);
        cout<<"El numero "<<vlr_base<<
        " se puede expresar como pow(2,"<<auxiliar<<") "<<endl;
        receptor.push_back(auxiliar);
        vlr_base = vlr_base-pow(2, auxiliar);//nuevo residuo

    }

    for(int comp : receptor){
        cout<<"El vector de exponentes es "<<comp<<endl;
    }


    string informe ="";//string con el binario


    /**
     * se inicializa el vector binarios que contendra los
     * digitos binarios representativos para el numero entero
     * ingresado.
     */
    int ex = receptor[0];
    vector<int>binarios (ex+1, 0);//contiene el binario de x

    cout<<"size of binarios with cero values is\n"<<binarios.size();

    cout<<"\nprimer valor de binarios es "<<binarios[0];

    
    

    for (int i = 1; i < receptor.size()+1; i++)
    {
        binarios[receptor[i]]=1;


    }
    

    // for(int ubic : receptor){
    //     binarios.insert(ubic, 1);
    //     cout<<"mi ubic"<<ubic<<endl;
    // }
    if (vlr_base>0)
    {
        binarios.push_back(1);//digito en numeros impares
    }

    int revision = binarios.size();
    cout<<"size of binarios es; "<<revision<<endl;


    /**
     * impresion de la representacion binaria
     * del numero ingresado. 
     */
    for(int final : binarios){
        informe=informe+to_string(final);
    }
    cout<<"La representacion binaria del numero "<<x<<" es: "
    <<informe<<endl;
    cout<<"===================================================== "<<endl;

    

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