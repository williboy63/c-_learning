#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <fstream>


int main()
{
    std::cout << "Name of the New File : ";
    std::string filename;
    std::cin >> filename;

    std::ofstream file (filename.c_str(), std::ios::app); //same has file.open(filename.c_str());  // By adding std::ios::app (*the app means append*) as an argument it makes file append instead of overwrite

    if(file.is_open())
    {
        std::cout << "success\n";//If the file opens on the first line, will pritn success
    }
    //file << "hey"; //With the file created, you can add directly to it like so file << (what to add)
    std::vector<std::string> names;
    names.push_back("Caleb");
    names.push_back("Amy");
    names.push_back("Susan");

    for(std::string name : names)
    {
        file << name << std::endl; // Adds the name one by one in the file
    }

    file.close(); //Explicitly close a file usually don't need it
    
}