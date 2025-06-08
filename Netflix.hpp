#ifndef NETFLIX_HPP
#define NETFLIX_HPP

#include "Video.hpp"
#include <iostream>

using namespace std;

class Netflix
{
protected:
    
public:
    vector <Video*> videos;
    Netflix();
};

Netflix::Netflix()
{
}



#endif