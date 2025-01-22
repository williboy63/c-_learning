#include <iostream>
#include <string>

int main()
{
    std::string greeting = "hello";
    std::cout << greeting[0] << std::endl; //This will print "h"; A string is basically a list of char
    std::string complete_greeting = greeting + " there";
    std::cout << complete_greeting << std::endl;
    complete_greeting += "!"; // This will add the "!"
    std::cout  << complete_greeting.length() << std::endl; //.length() is a member of the <string> class; will print the number of char
    //method == member function == functions attached to objects

    //std::string greet;
    //std::cin >> greet;
    //std::cout << greet << std::endl; //Like this, you can only type in one string (one word)

    std::string greet;
    getline(std::cin, greet); // This will allow multiple string entries into a var
    std::cout << greet << std::endl;




}