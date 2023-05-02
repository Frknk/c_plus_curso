#include <iostream>

using namespace std;

class Clase01{
    protected:
    int valor;

    public:
    Clase01(int _valor = 0){
        valor = _valor;
    }

    void setValor(int _valor){
        valor = _valor;
    }

    void imprimir(){
        cout << "Valor: " << valor << endl;
    }
};