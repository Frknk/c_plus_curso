#include <iostream>
using namespace std;

/*
Obtener el mes a partir del numero de mes
*/

int main(){
    int fecha;
    cout << "Inserte numero de mes: "; 
    cin >> fecha;
    switch (fecha) // Segun el numero realizar una accion
    {
    case 1:
        cout << "Es Enero";
        break;
    case 2:
        cout << "Es Febrero";
        break;
    case 3:
        cout << "Es Marzo";
        break;
    case 4:
        cout << "Es Abril";
        break;
    case 5:
        cout << "Es Mayo";
        break;
    case 6:
        cout << "Es Junio";
        break;
    case 7:
        cout << "Es Julio";
        break;
    case 8:
        cout << "Es Agosto";
        break;
    case 9:
        cout << "Es Septiembre";
        break;
    case 10:
        cout << "Es Octubre";
        break;
    case 11:
        cout << "Es Noviembre";
        break;
    case 12:
        cout << "Es Diciembre";
        break;
    
    default: // En caso de que no se cumpla ningun anterior
        cout << "Mes invalido";
        break;
    }

    return 0;
}
