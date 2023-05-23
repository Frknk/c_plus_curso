/*
Escriba un programa que solicite al usuario ingresar un número entero positivo y luego
imprima la secuencia de números desde 1 hasta el número ingresado, pero reemplazando los
múltiplos de 3 por la palabra "Fizz" y los múltiplos de 5 por la palabra "Buzz".Si el
número es múltiplo tanto de 3 como de 5, imprimir "FizzBuzz".
*/

#include <iostream>
using namespace std;

int main()
{
    int numero; // Declarando variable

    // Pidiendo datos
    cout << "Ingrese un numero entero positivo: ";
    cin >> numero;

    // Funcion para imprimir
    for (int i = 1; i <= numero; i++) // Recorriendo numeros
    {
        if (i % 3 == 0 && i % 5 == 0) // Comprobando si es multiplo de 3 y 5
        {
            cout << i << " FizzBuzz" << endl; // Imprimiendo
        }
        // Else if para evitar dobles impresiones
        else if (i % 3 == 0) // Comprobando si es multiplo de 3
        {
            cout << i << " Fizz" << endl; // Imprimiendo
        }
        else if (i % 5 == 0) // Comprobando si es multiplo de 5
        {
            cout << i << " Buzz" << endl; // Imprimiendo
        }
        else // Si no es multiplo de ninguno
        {                      
            cout << i << endl; // Imprimiendo
        }
    }
}