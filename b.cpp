#include <iostream>
#include <fstream>

int main()
{
    std::string name;
    std::cin >> name;
    std::ofstream file(name+".txt");
}