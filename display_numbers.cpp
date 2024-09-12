/*
Archivo: display_numbers.cpp
Autor: federico.barbeetti@correounivalle.edu.co>
Fecha creación: 2024-09-05
Fecha última modificación: 2024-09-05 
Licencia: GNU-GPL
*/

/**
 * ANOTATIONS;  da bugs con el 1, revisar el valor de las
 * operaciones con modulo ya que 1%n=1  y  0%n=0
 * ..manana seguimos.
 */

#include<iostream>
#include <string>
#include <vector>
#include <math.h>
using namespace std;


vector <int> receptor(10,0);//recepciona exponentes
vector<int>desbordada(10,9999);//info de desborde.
int info_exponentes=0;// {funcion vector exponentes} -> auxiliar para salida en consola



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

int auxiliar;//funcion en los exponentes ,reservara los exponentes en el ciclo

vector<int>factores(10,0);//pertenece a pot_Dos -> recibe los exponentes de 2 de cada ciclo.






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
        cout<<" se desborda....Debe ingresar un numero positivo\n"<<endl;

        return 0;
    }
    else if (x==0)
    {
        cout<<"aqui voy con cero "<<con_inter<<endl;

    }
    else if (x==1)//valor exepcional
    {
        con_inter++;
        cout<<"aqui voy impar == 1 "<<con_inter<<endl;


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
                //return con_inter;
            }
            else{
                cout<<"ingreso de nuevo en impares\n";
                pot_Dos(x);

            }


            
            
        }
        else if (x%2==0)
        {
            con_inter ++;
            x = x - (2*con_inter);
            if (x>0)
            {
                cout<<"ingreso de nuevo en pares\n";
                pot_Dos(x);
                

            }
            else{
                cout<<" el contador de potencias de 2 del numero "
                <<super_auxiliar<<" es "<<con_inter<<endl;
               // return con_inter;
            }
            
            
        }
        
    
    }

   // cout<<" con+inter.. al final saliendo "<<con_inter<<endl;



    /**
     * impresion
     */
    int count=0;//auxiliar
    for(int exit : factores){
        cout<<"El arreglo es [ "<<count<<" ] = "<<exit<<endl;
        count++;
    }


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

    info_exponentes=x;

    if (x<0)
    {
        cout<<"....funcion desbordada...\n...debe ingresar un numero entero... gracias.\n\n";
        return desbordada;

    }

    else if (x>=0)
    {
        /***
         * ciclo que llena en vector receptor con los
         * valores de las potencias de 2 aplicadas al
         * numero n y a sus residuos hasta reducirlos 
         * a 2
         */
        
            if (x%2!=0)//impares
            {
                x=(int)x/2;

                if (x==0)
                {
                    receptor.pop_back();
                    receptor.push_back(0);
                }
                else{
                    
                    
                    auxiliar = pot_Dos(x);

                    receptor[auxiliar]=1;

                    cout<<"El numero "<<info_exponentes<<
                    " se puede expresar como pow(2,"<<auxiliar<<") "<<endl;
                    x = x-pow(2, auxiliar);

                    if (x==1)
                    {
                        receptor.pop_back();
                        receptor.push_back(1);
                        cout<<"..se acabo el impar\n";
                        //return receptor;
                    }
                    else if (x>0)
                    {
                        los_exponentes(x);
                    }
                
                }
            }
            else if (x%2==0)
            {
                x=(int)x/2;

                if (x==0)
                {
                    receptor.pop_back();
                    receptor.push_back(0);
                    /* code */
                }
                else if (x==1)
                {
                    receptor.pop_back();
                    receptor.push_back(1);
                }
                else{

                    auxiliar = pot_Dos(x);
                    
                    receptor[auxiliar]=1;

                    cout<<"El numero "<<info_exponentes<<
                    " se puede expresar como pow(2,"<<auxiliar<<") "<<endl;
                    x = x-pow(2, auxiliar);

                    if (x==0)
                    {
                        receptor.pop_back();
                        receptor.push_back(0);
                        cout<<"saliendo en pares\n";
                        //return receptor;
                    }
                    else{
                        los_exponentes(x);
                    }
                
                }
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

    los_exponentes(answer);




    // cout<<"====================================================\nEl numero "<<answer<<" en notacion binaria es asi: "<<
    // informeFinal(exp)<<"\n====================================================\n"<<endl;
    





    return 0;

}