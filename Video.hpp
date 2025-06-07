// Clase hecha por Jin
#ifndef VIDEO_HPP
#define VIDEO_HPP

#include "Calificable.hpp"
#include <iostream>
#include <vector>

using std::vector;

class Video: public Calificable
{
private:
    
protected:
    int id;
    std::string nombre;
    std::string duracion;
    int genero;
    int calificacion;
    vector <int> calificaciones;

    Video();
    Video(int ide, std::string name, std::string duration, int genre);

public:
    virtual void mostrarInfo() = 0;
    friend Video& operator+=(Video& video, int calificacion);
};

#endif
