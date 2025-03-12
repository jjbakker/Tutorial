#include <iostream>

int main()
{
    for (int i {0}; i < 255; i++) {
        std::cout << "ASCII NUMBER" << i << ':' << (unsigned char)i << std::endl;
    }
    return 0;
}