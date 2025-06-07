#include "Pelicula.hpp"

using namespace std;

Pelicula::Pelicula():Video{}{}

Pelicula::Pelicula(int m, string p, string v, int e): Video(m, p, v, e) {}

void Pelicula::mostrarInfo(){
    cout << endl
    <<"\tID: 000" << to_string(id)
    <<"\tPelícula: " << nombre
    <<"\tDuración: " << duracion
    <<"\tCalificación promedio: " << to_string(promedio())
    ;
}

float Pelicula::promedio(){

    int suma = 0;
    for (int i = 0; i < calificaciones.size(); i++)
    {
        suma = suma + calificaciones[i];
    }
    return suma/calificaciones.size();
}

