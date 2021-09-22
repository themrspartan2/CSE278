// Nathan Farrar
// CSE 278 A
// 9/9/21

#include <iostream>
#include <iomanip>
#include <cmath>

int main()
{
    double radius = 0.0;

    std::cout  << "Enter the radius: ";
    std::cin >> radius;

    std::cout << "The area is: " << std::setprecision(2) << (radius * radius) * M_PI << std::endl;
    std::cout << "The perimeter is: " << std::setprecision(2) << (2 * radius) * M_PI << std::endl;

    return 0;
}
