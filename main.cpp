#include <iostream>

using namespace std;

class Fecha{
   private:
       int dia,mes,anio;
   public:
    void mostrar(){
     cout<< dia <<"/"<< mes <<"/"<< anio;
    }
    void cargar(){
     cout<<"DIA:";
     cin>>dia;
     cout<<"MES:";
     cin>>mes;
     cout<<"ANIO:";
     cin>>anio;
     cout<<endl;
    }
    bool operator == (Fecha &f){
        if(this->dia == f.dia && this->mes == f.mes && this->anio == f.anio){
            return true;
        }
     return false;
    }
    void operator += (int valor){
       anio+=valor;

    }
    /**
    bool operator >
    bool operator <
    bool operator <=
    bool operator >=
    */
};

int main()
{
    /**
    Fecha f1,f2;

    f1.cargar();
    f2.cargar();

    if(f1 == f2){
        cout<<"SON IGUALES";
    }else{
        cout<<"NO SON IGUALES";
    }
    */
    Fecha f1;
    f1.cargar();
    f1+=5;

    f1.mostrar();

    return 0;
}
