#include<iostream>
#include<cstdlib>

using namespace std;

class figurasCeometricas
{
private:
    /* data */
    int a;
    int b;
    int resultado;
public:
    void calcularArea(){
        resultado = a*b;
        cout<<"El area es;", resultado;

    };
    figurasCeometricas(int a1, int b1)
    {
        a=a1;
        b=b1

    }
    ~figurasCeometricas();
};



int main()
{
    /* code */
    figurasCeometricas cuadrado;
    cuadrado.calcularArea;
    return 0;
}

