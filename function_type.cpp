#include <iostream>
#include <cmath>

double power(double base, int exponent); //decleration, This declare the definition of the function if that function is below the main function
void print_pow(double base, int exponent);

int main() // Here, int is the type of the value that will be returned
{
    int base, exponent; // You can declare multiple variable in one line
    std::cout <<"What is the base?: ";
    std::cin >> base;
    std::cout <<"What is the exponent?: ";
    std::cin >> exponent;
    print_pow(base, exponent);
    print_pow(2, 5);
    print_pow(78, 53);
}


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