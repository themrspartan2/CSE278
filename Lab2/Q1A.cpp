// Nathan Farrar
// CSE 278 A
// 9/9/21

#include <iostream>

int main()
{
    int length = 0;
    int width = 0;
    
    std::cout << "Enter the width: ";
    std::cin >> length;

    std::cout << "Enter the width: ";
    std::cin >> width;

    std::cout << "The area is: " << length * width << std::endl;
    std::cout << "The perimeter is: " << (2 * length + 2 * width) << std::endl;

    return 0;
}
