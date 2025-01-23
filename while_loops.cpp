#include <iostream>
#include <climits>

int main()
{
    int factorial = 5; //5*4*3*2*1
    int i = factorial - 1;
    while(i >= 1)
    {

        factorial *= i;
        
        i--;
    }
    std::cout << factorial << std::endl;
}