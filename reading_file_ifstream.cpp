#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <fstream>


int main()
{
    /* INPUT METHOD

    std::ifstream file ("tacos.txt");

    std::vector<std::string> names;

    std::string input;
    while(file >> input)
    {
        names.push_back(input);
    }

    for(std::string name : names)
    {
        std::cout << name << std::endl;
    }

    */

    std::ifstream file("tacos.txt");

    char temp = file.get(); //This will get the first character in tacos.txt


    std::string line;
    getline(file, line);
    std::cout << line << "\n"; //This will print the first line in tacos.txt
}