#include"ellipse.hpp"
#include<cassert>
#define _USE_MATH_DEFINES
#include<cmath>

ellipse::ellipse(float majAx, float minAx):majorAxis(majAx), minorAxis(minAx){
}

float ellipse::area() const{
    return M_PI * majorAxis * minorAxis;
}

float ellipse::perimeter() const{
    float h = (pow(majorAxis - minorAxis, 2)) / pow(majorAxis + minorAxis, 2);
    return M_PI * (minorAxis + majorAxis) * (1 + (3*h/(10 + sqrt(4 - 3 * h))));
}

void ellipse::setmajorAxis(float majAx){
    assert(majAx >= 0);
    majorAxis = majAx;
}

void ellipse::setminorAxis(float minAx){
    assert(minAx >= 0);
    minorAxis = minAx;
}
