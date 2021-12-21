#include"rectangle.hpp"
#include <cassert>

rectangle::rectangle(float he, float le):height(he), length(le){
}

void rectangle::setHeight(float hei){
    assert(hei >= 0);
    height = hei;
}

void rectangle::setLength(float len){
    assert(len >= 0);
    length = len;
}

float rectangle::area() const{
    return height * length;
}

float rectangle::perimeter() const{
    return 2 * height + 2 * length;
} 
