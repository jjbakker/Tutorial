#include <iostream>
#include <string>

int main()
{
    std::cout << "Enter your full name: ";
    std::string name{};
    //std::cin >> name; // this won't work as expected since std::cin breaks on whitespace
    std::getline(std::cin >> std::ws, name); // read a full line of text into name

    std::cout << "Enter your favorite color: ";
    std::string color{};
    //std::cin >> color;
    std::getline(std::cin >> std::ws, color); // read a full line of text into name    

    std::cout << "Your name is " << name << " and your favorite color is " << color << '\n';
    std::cout << "Your name is " << name.length() << " characters\n";

    return 0;
}