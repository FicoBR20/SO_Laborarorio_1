/*
Archivo: pares_impares.cpp
Autor: federico.barbeetti@correounivalle.edu.co>
Fecha creación: 2024-09-01
Fecha última modificación: 2024-09-01 
Licencia: GNU-GPL
*/

#include<iostream>
#include<cstdlib>
#include<time.h>
#include<vector>
#include <string>
using namespace std;

/*
Este programa toma una lista de numeros en un vector de numeros
enteros e informa si cada elemento del vector es par o impar.
*/

/*
Esta funcion genera un numero entero aleatorio entre 0 y 30
*/
int ingresaNumero(){

    int limite=8// limite de cantidad de numeros a examinar.
    
    int ingreso = rand() % limite;//numero entero aleatorio

    return ingreso;
}

/**
 * Esta funcion toma un numero entero e informa si ese numero
 * es Par o Impar.
 */
string decidePI(int num){

    string queEs=""; // informa sobre la paridad o no del numero.
    if(num%2==0){
        queEs=" es par";
    }
    else{
        queEs=" es impar";
    }
   // cout<<"El numero "<<num<<queEs<<endl;
    return queEs;

}

/**
 * Esta funcion genera un vector de numeros enteros
 * con valores aleatorios.
 */
vector <int> listaNumeros(int cuantosN){

    vector<int>listadoN; //contenedor de los numeros

    for (int i = 0; i < cuantosN; i++)
    {
        listadoN.push_back(ingresaNumero());
    }

    for (int nume : listadoN) {
    //cout << " recorrido "<<nume << "\n";
    }

    return listadoN;

}

/**
 * Esta funcion recorre un lista de numeros enteros (vector)
 * e informa sobre cada elemento si el numero es PAR o IMPAR.
 */
vector <string> resultados(vector <int> listNum){
    
    vector<string>salida;//contiene el informe final

    for (int buscado : listNum){
        cout<<"El numero "<<buscado<<decidePI(buscado)<<endl;
        salida.push_back(decidePI(buscado));
    }

    return salida;
}


int main()
{
    srand(time(NULL));

    int totalDatos = ingresaNumero();

    cout<<"\nFUNCION ALEATORIA BUSCA PARES E IMPARES\nEn una lista de "<<totalDatos<<" numeros generados aleatoriamente,\nse toma cada numero y se informa si es PAR o IMPAR\n"<<endl;

    
    resultados(listaNumeros(totalDatos));

    return 0;
}
