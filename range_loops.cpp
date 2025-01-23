#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <array>


int main()
{
    int data[] = {1, 2, 3, 4, 5, 6,};

    for(int n : data) //Each n will be elements from data (like "for n in data: (PYTHON)) it work with arrays and vectors
    {
        std::cout << n << "\t";
    }


/*
    for(int i = 0; i < 6; i++)
    {
            std::cout << data[i] << "\t";
    }
*/
}