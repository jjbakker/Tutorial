#include <iostream>
using namespace std;

double square(double x) {

    return x * x * x;
}

void print_square(double x) {
    cout << "The square of " << x << " is " << square(x) << "\n";
}


int main() {
    print_square(3.45);

}
