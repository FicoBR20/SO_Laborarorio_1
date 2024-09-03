/*
Archivo: fibo_serie.cpp
Autor: federico.barbeetti@correounivalle.edu.co>
Fecha creación: 2024-09-02
Fecha última modificación: 2024-09-02 
Licencia: GNU-GPL
*/

#include<iostream>
#include <string>
#include <vector>
#include<array>
using namespace std;



/**
 * Funcion que entrega el volor del termino de la serie fibonacci
 * en la ubiacion n de la serie. 
 * miFibo(n) -> termino en la posicion n de la serie
 * miFibo(1)->0
 * miFibo(2)->1
 * miFibo(3)->1
 * miFibo(4)->2
 * miFibo(5)->3
 */
int miFibo(int n)//indica la posicion del termino de la serie.
{
    int acum1=0;// acumulador de sumas sucesivas

    if (n==1)
    {
        return acum1;
    }
    else if (n==2)
    {
        return acum1+1;
    }
    while (n>1)
    {
            n--;
            acum1 = miFibo(n-1)+miFibo(n);
            return acum1;
    }
    return acum1;
}

/**
 * funcion que genera un vector que contiene los
 * n terminos de la serie de fibonacci.
 * Usa recursion para el proceso.
 */
vector <int> imprimeFibo(int largoSerie){

    vector <int> salidaFinal;//contenedor de la serie numerica final

    int asignador;//auxiliar de proceso.

    for (int i = 1; i < largoSerie+1; i++)
    {
        asignador = miFibo(i);
        salidaFinal.push_back(asignador);
    }
    //secuencia de impresion de la serie contenida en el arreglo

    int auxiliar=1;

    for(int hallados :salidaFinal){
        cout<<"Posicion [ "<<auxiliar<<" ] = "<<hallados<<endl;
        auxiliar++;
    }

    return salidaFinal;

}

/**
 * Programa que imprime en consola los n terminos
 * de la serie fibonacci que el usuario decida ver.
 */
int main() 
{
    vector <int> serial;//contenedor de los valores de la n serie
    
    string auxiliar;
    int largoSerie; // cantidad de terminos de la serie a imprimir en consola.
    cout <<"\nCuantos terminos de la serie Fibonacci desea imprimir en consola\n\nADVERTENCIA: Debe ingresar un numero entero positivo\n\n";
    getline(cin, auxiliar);
    largoSerie=stoi(auxiliar);

    if (largoSerie>0)
    {
        /* code */
    

    //llamado a la funcion de impresion.
    cout<<"\n\nLos valores de la serie fibonacci con "<<largoSerie<<" terminos es: \n"<<endl;
    serial = imprimeFibo(largoSerie);
    }
    else{
        cout<<"\nADVERTENCIA usted ingreso el numero "<<largoSerie<<" \nSOLAMENTE se admiten numeros enteros positivos\n\n";
    }

    return 0;

}