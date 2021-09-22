// Nathan Farrar
// CSE 278 A
// 9/15/21

#include <iostream>
#include <iomanip>


int main()
{
    unsigned short length = 0, maximum = 0, minimum = 65535;
    unsigned short numbers[20];

    std::cout << "Enter up to 20 numbers with values up to 65535. \nPress \"Enter\" to enter each number. \nAnything else ends input.\n";
    unsigned short input = 0;

    //std::cin >> input will return false if the input is not an unsigned short
    while(std::cin >> input && length < 20) {
        numbers[length] = input;

        if(maximum < input) maximum = input; //Check if max
        if(minimum > input) minimum = input; //Check if min

        length++;
    }

    if(length == 0) { //Nothing entered
        std::cout << "No valid data.\n";
    } else { //Print results
        std::cout << "Array length: " << length << "\n";
        std::cout << "Maximum value: " << maximum << "\n";
        std::cout << "Minimum value: " << minimum << "\n";
        std::cout << "Median value: " << numbers[length/2] << "\n";
    }

    return 0;
}
 
