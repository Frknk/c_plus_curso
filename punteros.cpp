#include <iostream>

/*
Formato de puntero

tipo-dato *nombre_puntero

Direccion de puntero
*nombre_puntero &nombre_variable

*/

int main(){
    int num = 10;
    int *p = &num;
    std::cout << num << std::endl;
    std::cout << p << std::endl;
}