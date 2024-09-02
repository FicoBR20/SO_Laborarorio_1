/*
Archivo: fibo_serie.cpp
Autor: federico.barbeetti@correounivalle.edu.co>
Fecha creación: 2024-09-02
Fecha última modificación: 2024-09-02 
Licencia: GNU-GPL
*/

#include<iostream>
#include <string>
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
int miFibo(int n){//n es la posicion del termino en la serie
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

    int main(){

    string auxiliar;
    int largoSerie; // cantidad de terminos de la serie a imprimir en consola.
    cout <<"\nCuantos terminos de la serie Fibonacci\nDesea imprimir en consola\n
    Debe ingresar un numero entero positivo";
    getline(cin, auxiliar);
    largoSerie=stoi(auxiliar);

    int prueba =0;



    //cout<<"El factorial del termino "<<to_string(termino_Serie)<<" es "<<miFibo(termino_Serie)<<endl;

    return 0;

}