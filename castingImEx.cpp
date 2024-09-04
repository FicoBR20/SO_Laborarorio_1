/*
Archivo: cal_factorial.cpp
Autor: federico.barbeetti@correounivalle.edu.co>
Fecha creación: 2024-08-29
Fecha última modificación: 2024-08-29 
Licencia: GNU-GPL
*/

#include<iostream>
#include <string>
using namespace std;

/*
The IMPLICIT Type Conversion is where the type conversion 
is done automatically by the compiler.
It does not require any effort from the programmer.
The C++ compiler has a set of predefined rules. 
The compiler automatically converts one data type to another
based on these rules. Therefore, implicit type conversion is 
also known as automatic type conversion.
Long double -> double ->float -> long -> int -> short -> char
loss information

CORRECT ORDER 
bool --> char --> short int --> int --> 
unsigned int --> long --> unsigned long --> 
long long --> float --> double --> long double


The EXPLICIT type convertion  done by the Programmer mannually


Explicit Type Conversions are those conversions that are 
done by the programmer manually. In other words, 
explicit conversion allows the programmer to typecast (change) 
the data type of a variable to another type. Hence, 
it is also called typecasting. Generally, 
we use the explicit type conversion if we do not want 
to follow the implicit type conversion rules.

Explicit type conversion in C++ can be done in two ways:

    Conversion using the Assignment Operator - FORCED CASTING

    1. C-style type casting:

        (datatype)expression;

        char var = 'a';
        int charvar ;
        charvar =(int)var;

    2. Function style casting

        datatype(expression);

        int cant = 20;
        float ff;

        ff=float(cant);




    Conversion using the Cast Operator - CAST OPERADOR TO FORCE

    There are 4 types of Casting in C++ programming language. 
    These are:

    1- Static Cast -> static_cast <datatype> (expression)
        double num = 3.5 * 11.56;
        int salida;
        salida = static_cast<int>(num);
        Deben ser datos compactibles, NO char con int.

    2- Dynamic Cast -> dynamic_cast <datatype> (expression)

        #include <iostream>
        using namespace std;

        class Base {
        public:
            virtual void print() {}
        };

        class Derived: public Base {};

        int main() {
        Base* b = new Derived;
        Derived* d = dynamic_cast <Derived*> (b);

        if (d != NULL) {
            cout << "dynamic_cast done" << endl;
        } else {
            cout << "dynamic_cast not done" << endl;
        }

        return 0;
        }


    3- Const Cast - > const_cast <datatype> (expression)

        #include <iostream>
        using namespace std;

        int main() {
        const int var1 = 10;
        const int* ptr1 = &var1;

        cout << "The old value of ptr1 is: " << *ptr1 << endl;

        int* ptr2 = const_cast <int*> (ptr1);

        *ptr2 = 3;

        cout << "The new value of ptr1 is: " << *ptr1 << endl;

        return 0;
        }



    4- Reinterpret Cast    -> reinterpret_cast <datatype> (expression)

        #include <iostream>

        using namespace std;

        int main() {
        int* ptr = new int(98);

        char* ch = reinterpret_cast <char*> (ptr);

        cout << "The value of *ptr is: " << *ptr << endl;
        cout << "The value of ptr is: " << ptr << endl;
        cout << "The value of *ch is: " << *ch << endl;
        cout << "The value of ch is: " << ch << endl;

        return 0;
        }

*/
/**
 * funcion que presenta el casting implicito.
 * lo ejecuta el compilador bajo sus reglas.
 */
void implicito(){

    int int_declarado;
    float definido= 31.72 * 25.64;

    int_declarado = definido;

    cout<<"CASTING IMPLICITO\n================="<<endl;

    cout<<"El entero vale "<<int_declarado<<" el float vale "<<definido<<"\n"<<endl;

}
/**
 * funcion que presenta el casting explicito usando el
 * operador de asignacion.
 * usa notacion de casting y tambien notacion de funcion.
 */
void explicito_Ass_Ope(){

    char letra = 'y'; //tiene un valor entero asignado en la tabla ASCII
    int indefinido;

    cout<<"CASTING EXPLICITO - notacion de funcion y notacion de casting\n================="<<endl;
    indefinido = (int)letra; //notacion de casting
    cout<<"el valor de letra es "<<letra<<" el valor del entero indefinido es "<<indefinido<<endl;

    int definido = 33;
    float porSaber;

    porSaber=float(definido)/2; // notacion de funcion.
    cout<<"\nel vaor de la variable entera es "<<definido<<
    " el valor de la variable float es "<<porSaber<<endl;



}
/**
 * funcion que presenta un ejemplo para el casting static,
 * se ejecuta en tiempo de compilacion, no se chequea en 
 * tiempo de ejecucion. se debe estar muuy seguro.
 * Los tipos de datos deben ser compactibles, ejemplo aqui NO
 * funcionan variables tipo char con variables tipo enteros.
 */
void caStatico(){

    double existe = 22.7 * 55.9;

    cout<<"CASO STATIC CAST\n================="<<endl;

    cout<<"el valor incial es "<<existe<<endl;

    int indefinido;

    indefinido = static_cast <int>(existe);

    cout<<"despues del static cast vale "<<indefinido<<"\n"<<endl;


}
/**
 * Conversión dinámica

La conversión dinámica solo se puede utilizar con punteros y 
referencias a clases (o void*). Es una conversión en tiempo de 
ejecución y se utiliza para comprobar la validez de una conversión.
La expresión devuelve un valor NULL si la conversión falla. 
Esta conversión solo se puede utilizar cuando realizamos una 
conversión de tipo de una clase padre a una clase derivada.

La conversión dinámica utiliza el mecanismo de identificación de
tipo en tiempo de ejecución (RTTI) para que toda la información
sobre el tipo de datos de un objeto esté disponible en tiempo de 
ejecución. La información solo está disponible para clases con 
al menos una función virtual.
 */
void castDinamico(){

    cout<<" pendiente de ejecutar \n";


}

/*
Este programa muestra los distintos casos de casting implicito
y explicito.
*/
int main(int argc, char const *argv[])
{
    implicito();
    explicito_Ass_Ope();
    caStatico();


    return 0;
}
