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

namespace two_args
{
    double area(double length = 1, double width = 1);
}

double area(Rectangle rectangle);

namespace one_arg
{
    double area(double length = 10);
}
#endif