#include "utils.h"
#include <iostream>

int main(){
    Rectangle a((double)10,(double)10);
    std::cout  << two_args::area((double)10,(double)10) << "\n";
    std::cout  << one_arg::area((double)10) << "\n";
    // std::cout  << area(a) << "\n";
    return 0;
}