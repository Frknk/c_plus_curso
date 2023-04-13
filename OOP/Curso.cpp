#include <iostream>

using namespace std;

class Curso
{
private:
    // atributos
    float creditos;
    float parcial1, parcial2;
    float medio_curso, ex_final;

public:
    // constructor
    Curso(float _creditos, float _parcial1, float _parcial2, float _medio_curso, float _ex_final)
    {
        creditos = _creditos;
        parcial1 = _parcial1;
        parcial2 = _parcial2;
        medio_curso = _medio_curso;
        ex_final = _ex_final;
    }

    // Getters
    float getCreditos()
    {
        return creditos;
    }

    float getParcial1()
    {
        return parcial1;
    }

    float getParcial2()
    {
        return parcial2;
    }

    float getMedio_curso()
    {
        return medio_curso;
    }

    float getEx_final()
    {
        return ex_final;
    }

    // Setters
    void setCreditos(float _creditos)
    {
        creditos = _creditos;
    }

    void setParcial1(float _parcial1)
    {
        parcial1 = _parcial1;
    }

    void setParcial2(float _parcial2)
    {
        parcial2 = _parcial2;
    }

    void setMedio_curso(float _medio_curso)
    {
        medio_curso = _medio_curso;
    }

    void setEx_final(float _ex_final)
    {
        ex_final = _ex_final;
    }

    // Imprimir atributos
    void imprimir()
    {
        cout << "Creditos: " << creditos << endl;
        cout << "Parcial 1: " << parcial1 << endl;
        cout << "Parcial 2: " << parcial2 << endl;
        cout << "Medio Curso: " << medio_curso << endl;
        cout << "Examen Final: " << ex_final << endl;
    }

};

int main(){
    // Crear objetos
    Curso mate(4, 15, 16, 17, 18);
    Curso fisica(4, 15, 16, 17, 18);
    Curso quimica(4, 15, 16, 17, 18);
    Curso programacion(4, 15, 16, 17, 18);
    Curso calculo(4, 15, 16, 17, 18);

    // Imprimir atributos
    cout << "Fisica:" << "\n"; fisica.imprimir(); cout << "\n";
    cout << "Matematica:" << "\n"; mate.imprimir(); cout << "\n";
    cout << "Quimica:" << "\n"; quimica.imprimir(); cout << "\n";
    cout << "Programacion:" << "\n"; programacion.imprimir(); cout << "\n";
    cout << "Calculo:" << "\n"; calculo.imprimir(); cout << "\n";
    return 0;
}