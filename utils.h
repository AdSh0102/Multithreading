#ifndef UTILS
#define UTILS

class Rectangle{
    public:
        double width;
        double length;
        Rectangle(double length, double width){
            this->length = length;
            this->width = width;
        }
};

double area(double length = 1, double width = 1);

double area(double length = 10);

double area(Rectangle rectangle);
#endif