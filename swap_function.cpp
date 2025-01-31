#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <fstream>
#include <ostream>


void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;

    std::cout << "a: " << a << "\tb: " << b << "\n";
}

int main()
{
   int a = 10;
   int b = 20;

   swap(a, b);
   return 0;
}