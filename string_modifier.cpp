#include <iostream>


int main()
{
    std::string greeting = "Hello";
    std::cout  << greeting.length() << std::endl; //give you length 
    std::cout  << greeting.append(" there") << std::endl; //add string
    std::cout  << greeting.insert(3, "    ") << std::endl;// add space in the 3rd position (Hel    lo there)
    std::cout  << greeting.erase(3,2) << std::endl; // remove one element from the third delimiter
    greeting.pop_back(); //remove last element
    std::cout  << greeting.replace(3, 8, "Heaven") << std::endl;//replace the 3rd element to the 8th (HelHeavenr)

    

}