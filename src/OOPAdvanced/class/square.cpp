#include"square.hpp"

square::square(float side):rectangle(side, side){
}

void square::setHeight(float side){
    rectangle::setHeight(side);
    rectangle::setLength(side);
}

void square::setLength(float side){
    rectangle::setLength(side);
    rectangle::setHeight(side);
}