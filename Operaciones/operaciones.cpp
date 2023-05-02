#include <iostream>
#include "suma.cpp"

using namespace std;

class Operaciones{
    protected:
    string mensaje;

    public:
    Operaciones(string _mensaje){
        mensaje = _mensaje;
    }

    void imprimir(int a, int b){
        Suma s(a, b);
        cout << mensaje << s.sumar(a, b) << endl;
    }
};