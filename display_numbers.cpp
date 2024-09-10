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
int x=0;

int acum_exp=0;//acumulador en la funcion los_exponentes.

/**
 * variable usada en la funcion pot_Dos para acumulas
 * en el proceso la cantidad de exponentes o potencias de 2
 * que tenga un numero.
 */
int con_inter=0;
/**
 * variable auxiliar usada en la funcion pot_Dos, sirve para
 * impresion del resultado final en la consola
 */
int super_auxiliar=0;

int auxiliar;//funcionn los exponentes ,reservara los exponentes en el ciclo

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

    super_auxiliar=x;

    if (x<0)
    {
        cout<<" se desborda..\n"<<endl;

        return 0;
    }
    else if (x==0)
    {
        cout<<"aqui voy con cero "<<con_inter<<endl;
        return con_inter;
    }
    else if (x==1)
    {
        cout<<"aqui voy impar == 1 "<<con_inter<<endl;
        return con_inter;

    }
    
    
    else if (x>1)
    {
    
        if (x%2!=0)
        {
            con_inter++;
            x=x-(2*con_inter);
            if (x<0)
            {
                cout<<" el contador de potencias de 2 del numero "
                <<super_auxiliar<<" es "<<con_inter<<endl;

                return con_inter;
            }
            else{
                pot_Dos(x);

            }


            
            
        }
        else if (x%2==0)
        {
            con_inter ++;
            x = x - (2*con_inter);
            if (x>0)
            {
                pot_Dos(x);
                

            }
            else{
                cout<<" el contador de potencias de 2 del numero "
                <<super_auxiliar<<" es "<<con_inter<<endl;

                return con_inter;
            }
            
            
        }
        
    
    }

    cout<<" con+inter.. al final saliendo "<<con_inter<<endl;


    return con_inter;
    
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


    
    if (x<0)
    {
        cout<<" se desborda..\n"<<endl;

        system("exit");
    }
    else if (x==0)
    {
        
    }
    else if (x==1)
    {
        //acum_exp++;
        // cout<<"aqui voy impar == 1 "<<con_inter<<endl;

        //return con_inter;
    }
     
    
    

    /***
     * ciclo que llena en vector receptor con los
     * valores de las potencias de 2 aplicadas al
     * numero n y a sus residuos hasta reducirlos 
     * a 2
     */
    while (x>1){
        auxiliar = pot_Dos(x);
        receptor.push_back(auxiliar);
        acum_exp = acum_exp + 1;
        x = x-pow(2, auxiliar);//nuevo residuo
        if (x<0)
        {
            return receptor;
        }
        else{

            los_exponentes(x);
        
        }
        

    }
             
    


    //impresion

    int indice =0;

    for(int  exp : receptor){
        cout<<"receptor [ "<<indice<<" ] = "<<exp<<" acum es "<<acum_exp<<endl;
        indice++;
    }
    
    
    return receptor;
    
}


/**
 * funcion que entrega un string con los simbolos (0,1)
 * resultado de la conversion del numero ingresado a codigo
 * binario.
 */
string informeFinal(vector <int> exponentes){

    vector <int> lista_unos(10, 0);//vercto contenedor de binarios

    /**
     * ciclo para llenar los binarios en el arreglo
     */
    for (int i = 0; i < exponentes.size(); i++)
    {
       lista_unos[ lista_unos.size() - exponentes[i]]=1;
    }
        if (exponentes.back()==1)
        {
            lista_unos.pop_back();
            lista_unos.push_back(1);
        }
    

    int x = exponentes.back();
    

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


    pot_Dos(answer);



    // exp = los_exponentes(answer);

    // cout<<"====================================================\nEl numero "<<answer<<" en notacion binaria es asi: "<<
    // informeFinal(exp)<<"\n====================================================\n"<<endl;
    





    return 0;

}