// Clase hecha por Jin
#ifndef PELICULA_HPP
#define PELICULA_HPP

#include "Video.hpp"

class Pelicula: public Video
{
private:
    

public:

    Pelicula();
    Pelicula(int,std::string,std::string,int);
    void mostrarInfo() override;
    float promedio() override;
    
};

#endif