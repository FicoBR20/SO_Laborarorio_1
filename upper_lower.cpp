/*
Archivo: upper_lower.cpp
Autor: federico.barbeetti@correounivalle.edu.co>
Fecha creación: 2024-09-04
Fecha última modificación: 2024-09-04 
Licencia: GNU-GPL
*/

#include<iostream>
#include <string>
#include <vector>
#include<array>
#include<cstring>

using namespace std;



/**
 * funcion que recepciona el texto ingresado por elusuario.
 */
string ingrese_texto(){
    string receptor;
    cout<<"Ingrese un texto que tenga letras mayusculas y minusculas\n"<<endl;
    getline(cin, receptor);
    cout<<"\nEl texto ingresado es: \n"<<receptor<<endl;
    return receptor;
}


/**
 * funcion que entrega el valor ASCII de una letra o simbolo.
 * Rango numerico de las MAYUSCULAS [65;90] incluyendo los extremos
 * Rango numerico de las minusculas [97;122] incluyendo extremos
 */
int valor_Ascii(char simbolo){
    
    return int(simbolo);

}

void informe_Mayusculas(string ingresado){
    int contador_Mayusculas=0;//acumulador
    int contador_minusculas=0;//acumulador
    string las_Mayusculas="";
    string las_Minusculas="";
    for (int i = 0; i < ingresado.size(); i++)
    {
        if (valor_Ascii(ingresado[i])>64 && valor_Ascii(ingresado[i])<91)
        {
            contador_Mayusculas ++;
            if (las_Mayusculas.size()<1)
            {
                las_Mayusculas = las_Mayusculas + " " +ingresado[i];

            }
            else{

            las_Mayusculas = las_Mayusculas + ", " +ingresado[i];
            }
        }
        else if (valor_Ascii(ingresado[i])>96 && valor_Ascii(ingresado[i])<123)
        {
            contador_minusculas ++;
            if (las_Minusculas.size()<1)
            {
                las_Minusculas = las_Minusculas + " " +ingresado[i];

            }
            else{

            las_Minusculas = las_Minusculas + " ," +ingresado[i];
            }
        }        
        
    }
    cout<<"\nContiene "<<contador_Mayusculas<<" letras mayusculas\nLas cuales son: "<<
    las_Mayusculas<<"\n\n";
    cout<<"En cuanto a letras en minuscula contiene "<<contador_minusculas<<" letras minusculas\nLas cuales son: "<<
    las_Minusculas<<"\n\n";   
}


int main() 
{
    string auxiliar = "";
    auxiliar = ingrese_texto();
    informe_Mayusculas(auxiliar);

    




    return 0;

}