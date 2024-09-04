/*
Archivo: casting_dinamico.cpp
Autor: federico.barbeetti@correounivalle.edu.co>
Fecha creación: 2024-09-04
Fecha última modificación: 2024-09-04 
Licencia: GNU-GPL
*/

#include <iostream>
using namespace std;


/**
 * Clase superior
 */
class Padre {
  private:
  int valor;
  string name;
  public:
    Padre(int x, string s)//Constructor con parametros
    {
      valor = x; name = s;
    };
    Padre(){};//constructor sin parametros
    ~Padre() { cout << "\nDestruido Padre\n"; }//destructor

    void setValor(int x){valor=x;}
    int getValor(){return valor;}
    void setName(string x){name =x;}
    string getName(){return name;}
    
    virtual void imp_Padre(){
      cout<<"Padre es asi; \tValor\t"<<getValor()<<"\tName\t"<<getName()<<endl;
    }

};

/**
 * Clase inferior que hereda
 */
class Hija: public Padre {
  private:
  double monedas;
  public:
  Hija(int vl, string st, double mnd):Padre(vl,st){
    monedas=mnd;
  };
  Hija(){};
  ~Hija(){cout<<"destruida Hija"<<endl;};
  void setMonedas(double mn){
    monedas=mn;
  }
  double getMonedas(){
    return monedas;
  }

  virtual void imp_Hija(){
    cout<<"Hija es asi; \tValor\t"<<getValor()<<"\tName\t"<<getName()<<"\tMonedas\t"<<getMonedas()<<endl;
  }

};
/** 
 * El casting dinamico se sucede en clases bases (padres o
 * superiores) que sean polimorficas, es decir que al menos 
 * tengan un funcion virtual, esto asegura el DOWN CASTING
 * El objetivo final es convertir punteros de la clase Padre
 * a punteros de las clases hijas CONVERSION HACIA ABAJO.
 * main() ->funcion que presenta la implementacion del 
 * casting dinamico.
 */
int main() {
  //puntero Padre apuntando hacia Hija
  Padre* original = new Hija();
  original->setValor(11);
  original->setName("luisa");

  /**
   * Se crea un puntero Hija
   * tomando todo lo del puntero Padre.
   */
  Hija* convertida = dynamic_cast<Hija*>(original);

  if (convertida) //(!=NULL)
    {
      convertida->setMonedas(22.33);
      convertida->imp_Padre();//impresion desde la clase Padre
      convertida->setName("olga");
      convertida->imp_Hija();//impresion desde la clase Hija
      cout << "dynamic_cast done" << endl;
    } else {
      cout << "dynamic_cast not done" << endl;
    }

    //Limpieza de la memoria
    delete original, convertida;
    original=convertida=0;

  return 0;
}
