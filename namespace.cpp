#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <fstream>
#include <ostream>

namespace utilz
{
    double power(double base, int exponent) //definition
{
    double result = 1;
    for(int i = 0; i < exponent; i++)
    {
        result = result * base;
    }
    return result;
}

void print_pow(double base, int exponent) // A void function is a function which doesn't return a value
{
    double myPower = power(base, exponent); //Double is a more precise float variable
    std::cout << base <<" raised to the " << exponent << " power is " << myPower << std::endl;
} // The point of this void function is that if we wanted to print multiple entries, using a void function will make it easier to do so without repeating 50 different prints
}

int main()
{
   utilz::power(5, 2); //Calls the function power() from namespace utilz
   std::cout << utilz::power(5, 2) << std::endl;
}