/*
Archivo: string exammple.cpp
Autor: federico.barbeetti@correounivalle.edu.co>
Fecha creación: 2024-08-29
Fecha última modificación: 2024-08-29 
Licencia: GNU-GPL
*/

#include<iostream>
#include <string>
using namespace std;


/**
 * funcion que entrega el valor de la serie fibonaci
 * dado un n termino de la serie.
 * ejemplo:
 * si n = 0 entonces slowlyFib(0) -> 0
 * si n = 1 entonces slowlyFib(1) -> 0
 * si n = 4      entonces slowlyFib(1) -> 0
 */
int slowlyFib(int n){//enesimo termino de la serie

    int fibo;//valor del n termino de la serie
    int *fib = &fibo;

    if (n==0 || n==1)
    {
        *fib=0;
        return *fib;
    }
    else if (n>1)
    {
        while (n>1)
        {
            *fib=n+(n-1);
            slowlyFib(n-1);
            n--;

        }
        
    }
    
    
    
    return fibo;
}

    int main(){

    string auxiliar;
    int limite_Serie; // cantidad de terminos de la serie
    cout <<"\nQue cantidad de terminos de ls fibonacci desea obtener\nDebe ingresar un numero entero positivo (se incluye el cero)";
    getline(cin, auxiliar);
    limite_Serie=stoi(auxiliar);

    int prueba=0;

    cout<<"El factorial de "<<to_string(prueba)<<" es "<<slowlyFib(prueba)<<endl;

    return 0;

}