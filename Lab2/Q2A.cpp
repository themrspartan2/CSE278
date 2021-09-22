// Nathan Farrar
// CSE 278 A
// 9/9/21

#include <iostream>
#include <string>

int main() {
    //Store correct username and password
    const std::string correctUser = "21_CSE_c++_Fall";
    const std::string correctPass = "278A&B";
    std::string user = "";
    std::string pass = "";

    bool match = false;

    while (match == false) {

        //Take username and password from the user
        std::cout << "Input username: ";
        std::getline(std::cin, user);
        std::cout << "Input password: ";
        std::getline(std::cin, pass);
        
        //Check if information matches
        if(user == correctUser && pass == correctPass) {
            match = true;
        }
        else {
            std::cout << "Login failed." << "\n";
        }
    }
    
    std::cout << "Login successful." << "\n";

    return 0;
}
