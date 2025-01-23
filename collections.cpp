#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

int main()
{
    int guesses[] = {10, 13, 54, 42, 12, 12, 13};
    int size = sizeof(guesses) / sizeof(int); // Give the size of the array
    std::cout << size << std::endl;
}