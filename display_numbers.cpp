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
 * variable que representa los residuos, inicia con el valor de x
 * y generativamente decrece hasta un residuo 0 o 1.
 */
int str;


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

    return contador;
    
}

/**
 * funcion que entrega un vector <int> con los exponetes en base 2
 * correspondientes a los factores en los cuales puede descomponerse
 * un numero x.
 * fracciones(55) -> [5,4,2,1] 
 * -> { [2^5]+[2^4]+[2^2]+[2^1] } -> [<= x] sera menor o igual a x
 * */
vector <int> los_exponentes(int x){

    vector <int> receptor;//recepciona exponentes

    int auxiliar;//reservara los exponentes en el ciclo
    
    str = x;//asignacion inicial.

    /***
     * ciclo que llena en vector receptor con los
     * valores de las potencias de 2 aplicadas al
     * numero n y a sus residuos hasta reducirlos 
     * a 2
     */
    while (str>=2){
        auxiliar = pot_Dos(str);
        receptor.push_back(auxiliar);
        str = str-pow(2, auxiliar);//nuevo residuo

    }
    
    return receptor;
    
}


/**
 * funcion que entrega un string con los simbolos (0,1)
 * resultado de la conversion del numero ingresado a codigo
 * binario.
 */
string informeFinal(vector <int> exponentes){

    /**
     * limite del size para el vector que contendra
     * los datos binarios finales.
     */
    int lim = exponentes[0];

    vector <int> lista_unos(lim, 0);//vercto contenedor de binarios

    /**
     * ciclo para llenar los binarios en el arreglo
     */
    for (int i = 1; i < exponentes.size()+1; i++)
    {
       lista_unos[exponentes[i]]=1;
    }
    /**
     * condicional para el ultimo digito
     */
    if (str>0)
    {
        lista_unos.push_back(1);
    }

    string informe ="";//string de salida con el binario

    /**
     * concatenacion string 
     */
    for(int sale : lista_unos){
        informe = informe + to_string(sale);

    }
    
    return informe;
}

/**
 * Este programa le solicita al usuario el ingreso de un número
 * y seguidamente le entrega la representacion equivalente en 
 * notacion binaria, notacion octal y notacion hexadecimal.
 */

int main(){
    string auxiliar;
    int answer;
    cout <<"Ingrese el numero entero a expresar en binario\n";
    getline(cin, auxiliar);
    answer=stoi(auxiliar);
    int info = answer;

    vector<int>exp;//arreglo de exponentes
    string informe_binario="";//contiene los ceros y unos.

    exp = los_exponentes(answer);

    cout<<"====================================================\nEl numero "<<answer<<" en notacion binaria es asi: "<<
    informeFinal(exp)<<"\n====================================================\n"<<endl;
    





    return 0;

}

