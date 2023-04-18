/*
Escriba un programa que simule una calculadora con funciones básicas de suma,
resta, división y multiplicación,  el usuario deberá escoger que operaciónva a realizar
*/

#include <iostream>
using namespace std;

// Funciones para la calculadora
int suma(int num1, int num2)
{ // Funcion para sumar
    return num1 + num2;
}

int resta(int num1, int num2)
{ // Funcion para restar
    return num1 - num2;
}

int multiplicacion(int num1, int num2)
{ // Funcion para multiplicar
    return num1 * num2;
}

int division(int num1, int num2)
{ // Funcion para dividir
    if (num2 == 0)
    { // Si el divisor es 0
        cout << "No se puede dividir entre 0" << endl;
        return 0; // Retornar 0
    }
    return num1 / num2;
}

int main()
{
    cout << "*** Calculadora ***" << endl;
    int num1, num2, opcion; // Declarando variables
    cout << "Ingrese el primer numero: "; // Pidiendo datos
    cin >> num1;
    cout << "Ingrese el segundo numero: "; // Pidiendo datos
    cin >> num2;
    cout << "Ingrese la operacion que desea realizar: " << endl; // Pidiendo datos
    cout << "1. Suma" << endl;
    cout << "2. Resta" << endl;
    cout << "3. Multiplicacion" << endl;
    cout << "4. Division" << endl;
    cin >> opcion; // Pidiendo datos

    // Funcion para realizar segun la opcion
    switch (opcion) // Switch para las opciones
    {
    case 1: // Opcion 1                                                                  
        cout << "El resultado de la suma es: " << suma(num1, num2) << endl; // Imprimiendo resultados
        break;
    case 2: // Opcion 2                                                                    
        cout << "El resultado de la resta es: " << resta(num1, num2) << endl; // Imprimiendo resultados
        break;
    case 3: // Opcion 3                                                                 
        cout << "El resultado de la multiplicacion es: " << multiplicacion(num1, num2) << endl; // Imprimiendo resultados
        break;
    case 4: // Opcion 4                                                                 
        cout << "El resultado de la division es: " << division(num1, num2) << endl; // Imprimiendo resultados
        break;
    default: // Si no es ninguna de las opciones
        cout << "Opcion no valida" << endl;
        break;
    }
}