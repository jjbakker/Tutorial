#include <fstream>
#include <iostream>

int main () 
{

    // writing data
    std::ofstream outFile("example.txt"); // open file for writing

    if (outFile.is_open())  
    {
        outFile << "This is some text" << std::endl;
        outFile.close();

    }

    // reading data
    std::ifstream inFile("example.txt"); // open file for reading
    std::string line;
    if (inFile.is_open()) {

        while (std::getline(inFile, line)) { // read line by line
            std::cout << line << std::endl;
        }

        inFile.close();
    }
        else {
        std::cerr << "Error: unable to open file" << std::endl;
    }

    return 0;

}