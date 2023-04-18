#include <string.h>
#include "Curso2.cpp"

using namespace std;

int main(){
    
    Curso curs_1(14 , 15 , 16 , "Programacion Basica" );
    Curso curs_2(15, 16 , 17 , "Diseno de BD");
    Curso curs_3(15 , 16 ,17 ,"Sotfware I");
  /*  
     float not1, not2, not3;
    
        cout<<"ingrese las notas para el curso : " << curs_1.getDescripcion();
        cin>>not1;
        cin>>not2;
        cin>>not3;
        curs_1.setNota1(not1);
        curs_1.setNota2(not3);
        curs_1.setNota3(not3);
    */
    //cout<<"El promedio es :" << curs_1.promedio();
    //arreglos
    //forma 1 llamar al constructor 
    //Curso cursos[3]= {Curso("0001","Programacion Basica", 4), Curso("0001","Diseño de BD", 3), Curso("0001","Sotfware I", 2)};
    // forma 2 llamar los objetos
    Curso cursos[3]= {curs_1, curs_2, curs_3};
    float not1, not2, not3;
    for(int i=0; i<3; i++){
        cout<<"El curso es: " << cursos[i].getNombre() <<"\n";
        cout<<cursos[i].getNombre() <<" Ingrese las notas para el curso : ";
        cin>>not1;
        cin>>not2;
        cin>>not3;
        cursos[i].setNota1(not1);
        cursos[i].setNota2(not3);
        cursos[i].setNota3(not3);
    }
    cursos->imprimir();
    return 0;

}