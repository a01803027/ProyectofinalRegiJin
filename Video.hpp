// Clase hecha por Jin
#ifndef VIDEO_HPP
#define VIDEO_HPP

#include "Calificable.hpp"
#include "Pelicula.hpp"
#include <iostream>
#include <vector>

using std::vector;
using std::string;

class Video: public Calificable
{
private:
    
protected:
    int id;
    string nombre;
    string duracion;
    string genero;
    int calificacion;
    vector <int> calificaciones;
    vector <Video*> videos;

    Video();
    Video(int i, string n, string d, string g);

public:
    string getGenero();
    virtual bool soyPelicula() = 0;
    virtual void mostrarInfo() = 0;
    friend Video& operator+=(Video& video, int calificacion);
};

#endif
