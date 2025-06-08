#include "Pelicula.hpp"
#include <iomanip>

using namespace std;

Pelicula::Pelicula():Video{}{}

Pelicula::Pelicula(int m, string p, string v, string e): Video(m, p, v, e) {}

bool Pelicula::soyPelicula(){return true;}

void Pelicula::mostrarInfo(){
    cout << fixed << setprecision(1);
    cout << endl
    <<"\tID: 000" << to_string(id)
    <<"\tPelícula: " << nombre
    <<"\tDuración: " << duracion
    <<"\tGénero: " << genero
    <<"\tCalificación promedio: " << promedio() << endl;
} 

float Pelicula::promedio(){

    int suma = 0;
    for (int i = 0; i < calificaciones.size(); i++)
    {
        suma = suma + calificaciones[i];
    }
    return static_cast<float>(suma) / calificaciones.size();
}

