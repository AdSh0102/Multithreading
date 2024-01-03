#include <iostream>

class User{
    std::string status;

    public:
        std::string first_name;
        std::string last_name;
        void set_status(std::string status){
            this->status = status;
        }
};

std::istream& operator >> (std::istream& input, User& user){
    input >> user.first_name >> user.last_name;
    return input;
}

std::ostream& operator << (std::ostream& output, const User user){
    output << user.first_name << " " << user.last_name << "\n";
    return output;
}

int main(){
    User user;
    std::cin >> user;
    std::cout << user;
}