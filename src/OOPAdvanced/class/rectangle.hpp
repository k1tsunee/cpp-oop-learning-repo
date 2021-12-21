#ifndef RECTANGLE_HPP_
#define RECTANGLE_HPP_
#include"geometricalShape.hpp"

class rectangle : public geometricalShape{
    float height;
    float length;

    public:
        rectangle(float, float);

        float area() const;
        float perimeter() const;

        virtual void setHeight(float);
        virtual void setLength(float);

        float getHeight() const{
            return height;
        }

        float getLength() const{
            return length;
        }
};

#endif
