#ifndef TRIANGLES_H
#define TRIANGLES_H

#include <iostream>
#include <string>
#include <stdexcept>
#include <typeinfo>

class triangle{
public:
    triangle(int a, int b, int c);
private:
    int a;
    int b;
    int c;
};

#endif //TRIANGLES_H
