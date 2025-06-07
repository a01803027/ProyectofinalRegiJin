////Programa de Regina y Jin
// A01802688 A01803027

#include "Pelicula.hpp"
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    Pelicula Lalaland(1,"Lalaland","2h 8min",1);

    Video* vid = &Lalaland;

    //con este operador sobrecargado califico mi película
    Lalaland += 1;
    Lalaland += 3;
    
    vid ->mostrarInfo();

    return 0;
}
