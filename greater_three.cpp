#include <iostream>
#include<algorithm>
using namespace std;


/**
 * Esta funcion recibe 3 numeros enteros via consola por parte
 * del usuario, genera un arreglo con dicha informacion y ejecuta
 * un proceso de comparacion para hallar el mayor valor de dichos
 * numeros.
 */
void busca_Mayor(){

    const int limite = 3;

    int terminos[limite];//arreglo con los 3 terminos a comparar

    int asignador =0; // recibe la informacion del usuario.

    int el_mayor=0;// variable para informar el mayor valor.

    /**
     * instruccion para llenar el arreglo con los
     * tres datos.
     */
    for (int i = 0; i < limite; i++)
    {
        cout<<"Intruduzca un valor entero positivo\n"<<endl;
        cin>>asignador;
        terminos[i]=asignador;
        asignador=0;
    }
    /**
     * instruccion para imprimir el arreglo original.
     */
    int numerador=1;//auxiliar para la salida a consola
    for(int dado : terminos)
    {
        cout<<"\nPosicion [ "<<numerador<<" ] del arreglo es "<<dado<<endl;
        numerador ++;
    }

    /**
     * instruccion para manipular los terminos en 
     * busca de encontrar el valor mayor.
     */
    for (int i = 0; i < limite-1; i++)
    {
        if (terminos[i]>terminos[i+1])
        {
            terminos[i+1]=terminos[i];

        }
        
    }
    
    el_mayor=terminos[limite-1];
    
    
    cout<<"\nEl numero mayor es: "<<el_mayor<<"\n"<<endl;
 
    
}
/**
 * funcion de ejecucion prinipal.
 */
int main()
{

    busca_Mayor(); 
    return 0;
}
