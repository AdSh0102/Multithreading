#include <iostream>

std::string ans;
std::string& get_string(){
    ans = "get_string called";
    return ans;
}
int main(){
    std::string& temp = get_string();
    std::cout << temp << "\n";
    if(&temp == &ans)
    {
        std::cout << "they are equal";
    }
    return 0;
}