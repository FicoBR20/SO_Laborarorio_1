#include <iostream>
#include <string>
using namespace std;

string prueba(){

    string pizza2 = "mi pizza hawaina";
    string *piz = &pizza2;

    cout<<" mi pizza de hawaii "<<pizza2<<endl;
    cout<<" la direccion de mi pizza es "<<piz<<endl;
    cout<<" el CONTENIDO de la variable pizza2 es "<<*piz<<endl;



    return pizza2;
}

int main(int argc, char const *argv[])
{
   /*  string food = "Pizza";  // A food variable of type string
    string* ptr = &food;    // A pointer variable, with the name ptr, that stores the address of food

    // Output the value of food (Pizza)
    cout << food << "\n";

    // Output the memory address of food (0x6dfed4)
    cout << &food << "\n";

    // Output the memory address of food with the pointer (0x6dfed4)
    cout << ptr << "\n";   

*/

    prueba();

    return 0;
}
