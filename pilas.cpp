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

    /* 
    para pilas

    struct pila{
    int dato;
    pila *siguiente;
    };

    void push(pila *&, int n)
    {                                  // Funcion para ingresar datos a la pila
        pila *nuevo_nodo = new pila(); // Creando nuevo nodo
        nuevo_nodo->dato = n;          // Asignando valor al nodo
        nuevo_nodo->siguiente = pila1;
        pila1 = nuevo_nodo; // Asignando valor al nodo
        cout << "\tElemento " << n << " agregado a la pila correctamente" << endl;
    }
    void pop(pila *&, int &n)
    {                      // Funcion para eliminar datos de la pila
        pila *aux = pila1; // Creando nodo auxiliar
        n = aux->dato;     // Asignando valor al nodo
        pila1 = aux->siguiente;
        delete aux; // Eliminando nodo auxiliar
        cout << "\tElemento " << n << " eliminado de la pila correctamente" << endl;
    }
    void mostrar(pila *)
    { // Funcion para mostrar la pila
        pila *actual = new pila();
        actual = pila1;        // Asignando valor de nuestra pila a mostrar
        while (actual != NULL) // Mientras que no este vacia la pila
        {
            cout << actual->dato << ", "; // Mostrando datos
            actual = actual->siguiente;   // Actualizando a siguiente valor de la pila
        }
    }*/
}