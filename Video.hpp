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
    int duracion;
    int genero;
    int calificacion;
    vector <int> calificaciones;

    Video();
    Video(int ide, std::string name, int duration, int genre);

public:
    void calificar(int);
    int promedio();
    virtual void mostrarInfo() = 0;

};

#endif
