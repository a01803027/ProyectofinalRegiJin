#include "Video.hpp"

using namespace std;

Video::Video():id{0},nombre{""},duracion{0},genero{0},calificacion{0},calificaciones{}{}

Video::Video(int i, string n, string d, string g){
    id = i;
    nombre = n;
    duracion = d;
    genero = g;
}

string Video::getGenero(){
    return genero;
}

Video& operator +=(Video& video,int cali) {
    video.calificaciones.push_back(cali);
    return video;
}

