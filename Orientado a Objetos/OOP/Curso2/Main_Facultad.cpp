#include <iostream>
#include <string>
#include "Facultad.cpp"

using namespace std;

int main()
{

    Facultad facu("001", "Facultad de Ingenieria en Informatica y Sistemas", "FIIS");
    Facultad facu_2("002", "Facultad de Ingenieria en Mecanica Electrica", "FIME");
    Facultad facu_3("003", "Facultad de Agronomia", "agro");
    Facultad facultades[3] = {facu, facu_2, facu_3};

    for (int i = 0; i < 3; i++)
    {
        facultades[i].imprimir();
    }

    cout << "\n";

    for (int i = 0; i < 3; i++)
    {

        if (facultades[i].getSigla() == "FIME")
        {
            facultades[i].setCodigo("004");
        }

        if (facultades[i].getCodigo() == "003")
        {
            facultades[i].setSigla("AGRO");
        }

        facultades[i].imprimir();
    }

    return 0;
}