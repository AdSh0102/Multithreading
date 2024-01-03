#include "utils.h"

namespace two_args
{
    double area(double length, double width){
        return length * width;
    }
}

namespace one_arg
{
    double area(double length){
        return length * length;
    }
}

double area(Rectangle rectangle){
    return rectangle.length *  rectangle.width;
}