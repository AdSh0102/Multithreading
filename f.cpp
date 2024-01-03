#include <iostream>
#include <string>

class Shape {
public:
    virtual double area() = 0; // Pure virtual function
};

class Object {
protected:
    std::string name;
public:
    Object(std::string name):name(name) {}
};

class Rectangle : public Shape, protected Object {
private:
    double length;
    double width;
public:
    Rectangle(double length, double width, std::string name = "rectangle") : Object(name), length(length), width(width) {}

    double area() override {
        return length * width;
    }
};

int main() {
    Rectangle rect(5.0, 3.0);
    int temp = NULL;
    std::cout << "The area of rectangle: " << rect.area() << std::endl;
    return 0;
}
