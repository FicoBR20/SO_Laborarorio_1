#include <iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;

int acu =0;//usado en mcd
int sabio=0;//usado en info
/**
 * funcion para hallar el la maxima cantidad de factores
 * 2 que son necesarias para expresar x (no mayor que).
 * mcd(2) -> 1 ; mcd(3) -> 1 ; mcd(4) -> 2
 * mcd(15) -> 3
 */
int mcd(int x){

    sabio=x;

    if (x<2)
    {
        cout<<"El dato ingresado no es correcto\n"<<endl;
        return 0;
    }
    else{

        x=(int)x/2;

        if(x<1){
            acu;
        }
        else if (x==1)
        {
            acu++;
        }
        else{
            acu++;
            mcd(x);
        }

    }

    //cout<<"El mcd en base 2 del numero "<<sabio<<" es "<<acu<<endl;
    

return acu;

}





/**
 * funcion que genera un arreglo con los factores de 2.
 */
vector<int> info_binario(int a_binario){

vector<int>contenedor(10,0);

string salida=" sencilla ";

int auxiliar;// para llenar el arreglo

int receptor=a_binario;//se reducira hasta cero

while (receptor>=2)
{
    auxiliar = mcd(receptor);
    contenedor.push_back(auxiliar);
    receptor=receptor-(pow(2,auxiliar));
    cout<<" mis auxiliares "<<auxiliar<<endl;
    auxiliar=0;
}

        /**
     * impresion
     */
    int seguir=0;//au_mcd
    for(int sale : contenedor){
        cout<<"Posicion [ "<<seguir<<" ] = "<<sale<<endl;
        seguir++;
    }






cout<<" mi salida sera "<<salida<<endl;

return contenedor;

    
}




int main(int argc, char const *argv[])
{

    
    string au_mcd;
    int answer;
    cout <<"Ingrese su dato ";
    getline(cin, au_mcd);
    answer=stoi(au_mcd);
    
    vector<int>salebinario(10,0);

    info_binario(answer);






   // mcd(answer);



        /**
     * impresion
     */
    // int seguir=0;//au_mcd
    // for(int sale : salebinario){
    //     cout<<"Posicion [ "<<seguir<<" ] = "<<sale<<endl;
    //     seguir++;
    // }



   


    return 0;
}
