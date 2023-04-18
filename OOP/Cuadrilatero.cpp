#include <iostream>

using namespace std;

class Cuadrilatero
{
    // Atributos
private:
    float lado1;
    float lado2;

public:
    // Constructor
    Cuadrilatero(float _lado1, float _lado2)
    {
        lado1 = _lado1;
        lado2 = _lado2;
    }

    // Getters
    float getLado1()
    {
        return lado1;
    }

    float getLado2()
    {
        return lado2;
    }

    // Setters
    void setLado1(float _lado1)
    {
        lado1 = _lado1;
    }

    void setLado2(float _lado2)
    {
        lado2 = _lado2;
    }

    // Metodos
    float getArea()
    {
        return lado1 * lado2;
    }

    float getPerimetro()
    {
        return (lado1 + lado2) * 2;
    }

    // Imprimir valores
    void mostrar()
    {
        cout << "Lado 1: " << lado1 << endl;
        cout << "Lado 2: " << lado2 << endl;
        cout << "Area: " << getArea() << endl;
        cout << "Perimetro: " << getPerimetro() << endl;
    }
};

int main()
{
    // Declaramos 3 objetos
    Cuadrilatero cuadrilatero1(2, 3);
    Cuadrilatero cuadrilatero2(4, 5);
    Cuadrilatero cuadrilatero3(6, 7);

    // Modificamos los lados de 2 objetos
    cuadrilatero1.setLado1(10);
    cuadrilatero1.setLado2(20);
    cuadrilatero2.setLado1(20);
    cuadrilatero2.setLado2(30);

    // Sumatoria de lados por objeto
    cout << "Sumatoria de lados por objeto" << endl;
    cout << "Cuadrilatero 1: " << cuadrilatero1.getLado1() + cuadrilatero1.getLado2() << endl;
    cout << "Cuadrilatero 2: " << cuadrilatero2.getLado1() + cuadrilatero2.getLado2() << endl;
    cout << "Cuadrilatero 3: " << cuadrilatero3.getLado1() + cuadrilatero3.getLado2() << endl;

    // Calculo de area y perimetro por objeto
    cout << "Calculo de area y perimetro por objeto" << endl;
    cuadrilatero1.mostrar();
    cuadrilatero2.mostrar();
    cuadrilatero3.mostrar();

    // Sumatoria de areas de todos los objetos
    cout << "Sumatoria de areas de todos los objetos" << endl;
    cout << "Sumatoria: " << cuadrilatero1.getArea() + cuadrilatero2.getArea() + cuadrilatero3.getArea() << endl;

    // Sumatoria de perimetros de todos los objetos
    cout << "Sumatoria de perimetros de todos los objetos" << endl;
    cout << "Sumatoria: " << cuadrilatero1.getPerimetro() + cuadrilatero2.getPerimetro() + cuadrilatero3.getPerimetro() << endl;

    return 0;
}