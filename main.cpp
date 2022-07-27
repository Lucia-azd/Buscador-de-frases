#include "buscador_de_frases.h" 

int main(int argc, char* argv[] ){
    int cantidad_argumentos = argc;

    if(cantidad_argumentos < 3){
        cout<< "\n" << "Cantidad de argumentos invalidos, por favor ingrese dos argumentos - 'Historia' y 'Frase a buscar' -" << "\n" <<endl;
    }else{
        cargar_vector(argv[1], argv[2]);
    }
    return 0;
}


