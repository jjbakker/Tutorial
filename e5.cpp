#include <iostream>
using namespace std;

int getValue() {


    cout << "Enter integer:  ";
    int input{};
    cin >> input;

    return input;
    

}


int main() {

    int num {getValue()};
    cout << num << " doubled is " << num * 2 << "\n";

    return EXIT_SUCCESS;

}