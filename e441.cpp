#include <iostream>

int main() {

    int x {2'147'483'647}; 
    
    x = x+1;
    std::cout << "Overflow value " << x << "\n";
    return 0;

}