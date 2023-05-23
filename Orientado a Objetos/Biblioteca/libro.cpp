#include <string>

using namespace std;

class Libro{
    private:
    string l_codigo, titulo, categoria, autor;

    public:
    // Constructor
    Libro(string _l_codigo = "", string _titulo="", string _categoria="", string _autor=""){
        l_codigo = _l_codigo;
        titulo = _titulo;
        categoria = _categoria;
        autor = _autor;
    }

    // Obtener datos string
    string getData(){
        return l_codigo + " " + titulo + " " + categoria + " " + autor;
    }
};