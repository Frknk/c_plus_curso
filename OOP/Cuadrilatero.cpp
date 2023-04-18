#include <iostream>
#include <string>
#include <math.h>

using namespace std;

class Cuadrilatero
{
private:
    // atributos
    float base, altura;
    float area, perimetro;
    float hipotenusa;
    string tipo;

public:
    // constructor
    Cuadrilatero(float _base, float _altura)
    {
        base = _base;
        altura = _altura;
    }

    // Getters
    float getBase()
    {
        return base;
    }

    float getAltura()
    {
        return altura;
    }

    float getArea()
    {
        return area;
    }

    float getPerimetro()
    {
        return perimetro;
    }

    float getHipotenusa()
    {
        return hipotenusa;
    }

    string getTipo()
    {
        return tipo;
    }

    // Setters
    void setBase(float _base)
    {
        base = _base;
    }

    void setAltura(float _altura)
    {
        altura = _altura;
    }

    void setArea(float _area)
    {
        area = _area;
    }

    void setPerimetro(float _perimetro)
    {
        perimetro = _perimetro;
    }

    void setHipotenusa(float _hipotenusa)
    {
        hipotenusa = _hipotenusa;
    }

    void setTipo(string _tipo)
    {
        tipo = _tipo;
    }

    // Metodos
    void calcularArea()
    {
        area = (base * altura) / 2;
    }

    void calcularPerimetro()
    {
        hipotenusa = sqrt(pow(base, 2) + pow(altura, 2));
        perimetro = base + altura + hipotenusa;
    }

    void calcularHipotenusa()
    {
        hipotenusa = sqrt(pow(base, 2) + pow(altura, 2));
    }

    void tipoTriangulo()
    {
        if (base == altura)
        {
            cout << "Tipo de triangulo: Es un triangulo equilatero" << endl;
        }
        else if (base == hipotenusa || altura == hipotenusa)
        {
            cout << "Tipo de triangulo: Es un triangulo isosceles" << endl;
        }
        else
        {
            cout << "Tipo de triangulo: Es un triangulo escaleno" << endl;
        }
    }

    void mostrarDatos()
    {
        cout << "Base: " << base << endl;
        cout << "Altura: " << altura << endl;
        cout << "Area: " << area << endl;
        cout << "Perimetro: " << perimetro << endl;
        cout << "Hipotenusa: " << hipotenusa << endl;
        cout << tipo;
    }
};

int main(){
    // objeto
    Cuadrilatero cuadrado1(3, 4);

    cout << endl;

    Cuadrilatero cuadrado2(24, 7);

    cout << endl;

    Cuadrilatero cuadrado3(1, 1);

    return 0;
}