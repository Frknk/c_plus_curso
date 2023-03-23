#include <iostream>
#include <queue> // incluimos la biblioteca de colas

using namespace std;

int main()
{
    queue<int> cola;
    cola.push(1);
    cola.push(2);
    cola.push(3);
    cola.push(4);
    cola.push(5);
    cola.push(6);

    
    // cola.pop();
    //  accedemos al primer elemento de la cola
    cout << "Primer elemento de la cola: " << cola.front() << endl;
    // acceder al ultimo elemento de la cola
    cout << "ultimo elemento elemento de la cola: " << cola.back() << endl;
    // eliminamos el primer elemento de la cola
    cola.pop();
    // accedemos al nuevo primer elemento de la cola
    cout << "Nuevo primer elemento de la cola: " << cola.front() << endl;

    while (!cola.empty())
    {
        // Obtener el primer elemento de la cola
        int elemento = cola.front();
        
        // Mostrar el elemento
        cout << elemento << endl;

        // Eliminar el primer elemento de la cola
        cola.pop();
    }
}    