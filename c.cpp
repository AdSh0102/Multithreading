#include "utils.h"
#include <iostream>

int main(){
    Rectangle a((double)10,(double)10);
    std::cout  << area((double)10,(double)10) << "\n";
    std::cout  << area(a) << "\n";
    return 0;
}