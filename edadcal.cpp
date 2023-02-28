#include <iostream>

int calcular_edad(int anio_nac){
	int edad = 0;
	edad = 2023 - anio_nac;
	return edad;
}

int main(){
	int anio, edad;
	std::cout << "Anio de nacimiento: "; std::cin >> anio;
	edad = calcular_edad(anio);
	if (edad>= 18){
		std::cout<< "Eres mayor de edad";
	} else {
		std::cout<< "No eres mayor de edad";
	}
}

