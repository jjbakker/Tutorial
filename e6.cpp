#include <iostream>
using namespace std;

int getValueFromUser() {

    cout << "Enter integer:  ";
    int input{};
    cin >> input;

    return input;

}


int main() {

    int x {getValueFromUser()};
    int y {getValueFromUser()};

    cout << x << " + " << y << " = " << x + y << "\n";

    return EXIT_SUCCESS;

}