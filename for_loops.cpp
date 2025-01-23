#include <iostream>
#include <climits>

int main()
{
    int factorial = 5;
    for (int i = factorial - 1; i > 0; i--) //If you want to loop in reverse use i--
    {
       factorial = factorial *i; 
    }
    std::cout << "Factorial :" << factorial << std::endl;
}