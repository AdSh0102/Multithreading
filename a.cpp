#include <thread>
#include <iostream>

void func(int a){
    std::cout << a << "\n";
}

int main(){
    std::thread a(func, 10);
    std::thread b(func, 12);
    a.join();
    b.join();
    return 0;
}