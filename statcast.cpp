#include <iostream>

void print(int x)
{
	std::cout << x << '\n';
}

int main()
{   
    float f {4.5};

	print( static_cast<int>(5.5) ); // explicitly convert double value 5.5 to an int

	return 0;
}