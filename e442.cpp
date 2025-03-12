#include <iostream>

int main() {

    std::cout << "Modulo wraparound in unsigned short\n";


    unsigned short x {65535}; 
    std::cout << "x {65535}: " << x << "\n";

    x = 65536;
    std::cout << "x {65536}: " << x << "\n";

    x = 65537;
    std::cout << "x {65537}: " << x << "\n";

    x = -1;
    std::cout << "x {-1}: " << x << "\n";

    x = -2;
    std::cout << "x {-2}: " << x << "\n";



    return 0;

}