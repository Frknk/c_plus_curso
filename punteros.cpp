#include <iostream>

/*
Formato de puntero :
tipo-dato *nombre_puntero

Direccion de puntero :
*nombre_puntero &nombre_variable

*/

int main(){
    int num = 58;
    int *p = &num;
    int **q = &p;

    std::cout << "num: " << num << std::endl;
    std::cout << "p: " << p << std::endl;
    std::cout << "q: " << q;
}