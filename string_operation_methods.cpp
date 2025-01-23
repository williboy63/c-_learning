#include <iostream>
#include <string>

void fuck_finder(std::string list)
{    
    if(list.find("fuck") == -1) std::cout << list;

    if(list.find("fuck") != -1) list.replace(list.find("fuck"), 4, "****"); std::cout << list << std::endl;    
}


int mainy()
{
    std::string greeting;
    std::cout << "Print your sentence here :";
    getline(std::cin, greeting); 
    
    fuck_finder(greeting);
    return 0;

}


int main()
{
    std::string greeting = "What is up?";
    std::cout << greeting.substr(5, 2) << std::endl; //retrive char at index 5 for 2 char long (is)
    std::cout << greeting.find_first_of("aeiou") << std::endl; // finds the first char from this string, if the char is not in the string, will print npos
    if(greeting.find_first_of("!") == -1) std::cout << "NOT FOUND!" << std:: endl; //if the npos shows up, will print not found
    //you can compare .compare() to compare string but mostly used in java not c++
    return 0;
}



