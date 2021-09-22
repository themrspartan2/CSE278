// Nathan Farrar
// CSE 278 A
// 9/9/21

#include <iostream>
#include <string>

int main() {
    //Store correct username and password. Username now lowercase
    const std::string correctUser = "21_cse_c++_fall";
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

        //Convert entered username to lowercase
        for (int i = 0; i < user.length(); i++) {
            user[i] = tolower(user[i]);
        }

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