#include <iostream>

template<typename T>
void swap(T& a, T& b)
{
    T c = a;
    a = b;
    b = c;
}

int main(){
    std::string A = "hello", B = "world";
    int a = 10, b  = 20;
    std::cout << a << " " << b << "\n";
    std::cout << A << " " << B << "\n";
    swap(a,b);
    swap(A,B);
    std::cout << a << " " << b << "\n";
    std::cout << A << " " << B << "\n";
}