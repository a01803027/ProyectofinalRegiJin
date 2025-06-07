// Clase hecha por Jin
#ifndef PELICULA_HPP
#define PELICULA_HPP

class Pelicula
{
public:
    Pelicula();
    void mostrarInfo();
    friend int operator+(Pelicula,Pelicula);
    friend int operator+(int,Pelicula);
};

#endif