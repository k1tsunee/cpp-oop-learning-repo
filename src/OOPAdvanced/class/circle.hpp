#ifndef CIRCLE_HPP_
#define CIRCLE_HPP_
#include"ellipse.hpp"

class circle : public ellipse{
    public:
        circle(float);

        float perimeter() const;
        void setmajorAxis(float);
        void setminorAxis(float);
};

#endif