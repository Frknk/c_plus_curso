#include <fstream>
#include <iostream>
#include "biblioteca.cpp"

int main(){
    // Crear biblioteca
    Biblioteca biblioteca("B001", "Biblioteca Nacional", "Av. Abancay", "01-423-1234");

    // Crear libros
    Libro libro1("L001", "El principito", "Infantil", "Antoine de Saint-Exupéry");
    Libro libro2("L002", "El arte de la guerra", "Estrategia", "Sun Tzu");
    Libro libro3("L003", "El señor de los anillos", "Fantasia", "J. R. R. Tolkien");
    Libro libro4("L004", "El código Da Vinci", "Misterio", "Dan Brown");
    Libro libro5("L005", "El alquimista", "Novela", "Paulo Coelho");

    // Registrar libros
    biblioteca.registrarLibro(libro1);
    biblioteca.registrarLibro(libro2);
    biblioteca.registrarLibro(libro3);
    biblioteca.registrarLibro(libro4);
    biblioteca.registrarLibro(libro5);

    // Crear usuarios
    Usuario usuario1("U001");
    Usuario usuario2("U002");
    Usuario usuario3("U003");
    Usuario usuario4("U004");
    Usuario usuario5("U005");

    // Crear bibliotecarios
    Bibliotecario bibliotecario1("B001");

    // Prestar libros
    biblioteca.prestamoLibro(bibliotecario1, usuario1, libro1);
    biblioteca.prestamoLibro(bibliotecario1, usuario2, libro2);
    biblioteca.prestamoLibro(bibliotecario1, usuario3, libro3);
    biblioteca.prestamoLibro(bibliotecario1, usuario4, libro4);
    biblioteca.prestamoLibro(bibliotecario1, usuario5, libro5);

    // Imprimir prestamos
    ofstream archivo("archivo.txt");
    archivo << biblioteca.imprimirPrestamos();
    archivo.close();

    return 0;
}