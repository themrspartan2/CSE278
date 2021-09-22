// Nathan Farrar
// 9/16/2021
// CSE 278 A

#include <iostream>

void refSwap(int &aRef, int &bRef) {
    int temp = aRef;
    aRef = bRef;
    bRef = temp;
}

void pointSwap(int *aPointer, int *bPointer) {
    int temp = *aPointer;
    *aPointer = *bPointer;
    *bPointer = temp;
}

int main() {
    int a = 10;
    int b = 2;
    std::cout << "Original Values: " << a << ", " << b << "\n"; //-> 10, 2

    int &aRef = a ; 
    int &bRef = b;
    refSwap(aRef, bRef);
    std::cout << "Reference Swap: " << a << ", " << b << "\n"; //-> 2, 10

    int *aPointer = &a;
    int *bPointer = &b;
    pointSwap(aPointer, bPointer);
    std::cout << "Pointer Swap: " << a << ", " << b << " (Back to original)\n"; //-> 10, 2

    return 0;
}
