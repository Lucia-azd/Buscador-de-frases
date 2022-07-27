#include "buscador_de_frases.h"

void imprimir_mensaje_frase_inexistente(){
    cout<< "\n" << "Frase no encontrada en la historia." << "\n" <<endl;
}

void imprimir_vector(int* vector_indices, int tamanio_vector){
    cout<< "\n" << "INDICES en los que se encontro la frase: ";
    for(int i = 0; i < tamanio_vector; i++){
        cout<<vector_indices[i];
        if(i != (tamanio_vector-1)){
            cout<<" - ";
        }
    }
    cout<< "\n" <<endl;
}

bool frase_encontrada(string historia, string frase, int posicion_actual_historia, int longitud_frase){
    int posicion_historia = posicion_actual_historia;
    int posicion_frase = 0;
    bool frase_encontrada = true;

    while (frase_encontrada && (posicion_frase < longitud_frase)){
        if (tolower(historia[posicion_historia]) == tolower(frase[posicion_frase])){
            posicion_historia++;
            posicion_frase++;
        }else {
            frase_encontrada = false;
        }
    }

    return frase_encontrada;
}

int contar_coincidencias(string historia, string frase, int longitud_historia, int longitud_frase){
    int coincidencias = 0;

    if( longitud_frase <= longitud_historia ){
        for (int i = 0; i <= (int)(longitud_historia - longitud_frase); i++){
            if (frase_encontrada(historia, frase, i, longitud_frase)){
                coincidencias++;
            }
        }
    }

    return coincidencias;
}

int* crear_vector(int tamanio_vector){
    int* vector_indices = new int [tamanio_vector];
    return vector_indices;
}

void cargar_vector(char* argv_1, char* argv_2){
    string historia = argv_1;
    string frase = argv_2;
    long unsigned int longitud_historia = historia.length();
    long unsigned int longitud_frase = frase.length();

    int tamanio_vector = contar_coincidencias(historia, frase, (int)longitud_historia, (int)longitud_frase);

    if( tamanio_vector > 0 ){
        int* vector_indices = crear_vector(tamanio_vector);
        int posicion_vector = 0;

        for (int i = 0; i <= (int)(longitud_historia - longitud_frase); i++){
            if (frase_encontrada(historia, frase, i, (int)longitud_frase)){
                vector_indices[posicion_vector] = i;
                posicion_vector++;
            }
        }

        imprimir_vector(vector_indices, tamanio_vector);
        delete [] vector_indices;

    }else{
        imprimir_mensaje_frase_inexistente();
    }
}
