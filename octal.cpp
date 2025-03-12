#include <iostream>
#include <bitset>

int main()
{
    int a{ 0xF }; // 0 before the number means this is octal

    std::bitset<8> bin1{ 0b1100'0101 };

    std::cout << bin1 << '\n';

    int x { 12 };
    std::cout << x << '\n'; // decimal (by default)
    std::cout << std::hex << x << '\n'; // hexadecimal
    std::cout << x << '\n'; // now hexadecimal
    std::cout << std::oct << x << '\n'; // octal
    std::cout << std::dec << x << '\n'; // return to decimal
    std::cout << x << '\n'; // decimal

    int y{ 0b0001'0011 }; // 0 before the number means this is octal

    std::cout << a << '\n';
    std::cout << y << '\n';

    return 0;
}