#ifndef BUSCADOR_DE_FRASES_H_INCLUDED
#define BUSCADOR_DE_FRASES_H_INCLUDED

#include <iostream>

using namespace std;

/*
* Pre: -
* Pos: Imprime por pantalla un mensaje de que la frase no se encontro en la historia
*/
void imprimir_mensaje_frase_inexistente();

/*
* Pre: -
* Pos: Imprime por pantalla el contenido del vector pasado por parametro.
*/
void imprimir_vector(int* vector_indices, int tamanio_vector);

/*
* Pre: -
* Pos: Devuelve TRUE si la frase se encuentra en la historia o FALSE en caso contrario.
*/
bool frase_encontrada(string historia, string frase, int posicion_actual_historia, int longitud_frase);

/*
* Pre: El tamanio de la frase pasada por parametro debe ser igual o menor al tamanio de la historia pasada por parametro.
* Pos: Devuelve la cantidad de veces en las que la frase coincide con una parte de la historia.
*/
int contar_coincidencias(string historia, string frase, int longitud_historia, int longitud_frase);

/*
* Pre: El tamanio del vector debe ser mayor a cero.
* Pos: Devuelve un vector de memoria dinamica.
*/
int* crear_vector(int tamanio_vector);

/*
* Pre: -
* Pos: Carga el vector dinamico con los indices de cuando coincide la frase con la historia.
*/
void cargar_vector(char* argv_1, char* argv_2);



#endif // BUSCADOR_DE_FRASES_H_INCLUDED
