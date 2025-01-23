#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <fstream>
#include <ostream>

void do_something(int array[])
{

}



void print_array(const int data[], int size) //The data array here in constant, it will not change inside this function, written like this line 13 (*data[i]++*) will cause an error because it tries to modify a const
{
    for(int i = 0; i < size; i++)
    {
        // data[i]++;
        std::cout << data[i] << "\t";
    }
    std::cout << "\n";
    // do_something(data); //This fucntion will break the program because its parameter (line 9) is not a constent so it could modify the constent of the print_array() function. If you make the parameter a const it will work
}



int main()
{
    int data[] = {1, 2, 3};
    print_array(data, 3);
    std::cout << data[0] << std::endl;
}