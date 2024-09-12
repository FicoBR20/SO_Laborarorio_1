#include <iostream>
#include<string>

using namespace std;

int main(int argc, char const *argv[])
{
    string auxiliar;
    int answer;
    cout <<"Ingrese datos ";
    getline(cin, auxiliar);
    answer=stoi(auxiliar);

    // usaremos el 13

    int x=answer;
    int y;
    int acum =0;

    y=(int)x/2;
    x=x-y;

    cout<<"x es "<<x<<" y es "<<y<<endl;





    return 0;
}
