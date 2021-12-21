#include"circle.hpp"
#define _USE_MATH_DEFINES
#include<cmath>

circle::circle(float radius):ellipse(radius, radius){
}

void circle::setmajorAxis(float radius){
    ellipse::setmajorAxis(radius);
    ellipse::setminorAxis(radius);
}

void circle::setminorAxis(float radius){
    ellipse::setmajorAxis(radius);
    ellipse::setminorAxis(radius);
}

float circle::perimeter() const{
    return 2 * M_PI * getmajorAxis();
}
