#ifndef GEOMETRICALSHAPE_HPP_
#define GEOMETRICALSHAPE_HPP_

class geometricalShape{
    public:
        virtual ~geometricalShape(){}
        virtual float area() const = 0;
        virtual float perimeter() const = 0;
};

#endif