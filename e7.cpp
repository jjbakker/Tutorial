#include <iostream>
using namespace std;

int getValueFromUser() {

    cout << "Enter integer:  ";
    int input{};
    cin >> input;

    return input;
}

void printDouble(int a) {

    cout << a << " Doubled = " << a * 2 << "\n";

}



int main() {

    //int x {getValueFromUser()};
    printDouble(getValueFromUser());

    return EXIT_SUCCESS;

}