#include "utils.h"

double area(double length, double width){
    return length * width;
}

double area(Rectangle rectangle){
    return rectangle.length *  rectangle.width;
}