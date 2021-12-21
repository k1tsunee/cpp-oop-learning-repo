#ifndef SQUARE_HPP_
#define SQUARE_HPP_
#include"rectangle.hpp"

class square : public rectangle{
    public:
        square(float);

        void setHeight(float);
        void setLength(float);
};

#endif