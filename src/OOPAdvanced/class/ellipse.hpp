#ifndef ELLIPSE_HPP_
#define ELLIPSE_HPP_
#include"geometricalShape.hpp"

class ellipse : public geometricalShape{
    float majorAxis;
    float minorAxis;

    public:
        ellipse(float, float);

        float area() const;
        float perimeter() const;

        virtual void setmajorAxis(float);
        virtual void setminorAxis(float);

        float getmajorAxis() const{
            return majorAxis;
        }

        float getminorAxis() const{
            return minorAxis;
        }
};

#endif
