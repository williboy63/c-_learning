#include <iostream>
#include <climits>

int main()
{ //Those are integrals types

    //Difference between these is the number of bits allowed to be stored in them
    short a; //
    int b; // at least 16 bits, usually 32bits
    long c; // at least 32 bits
    long long d; // at least 64 bits

// Unsigned only allwo positive values

    unsigned short aa;
    unsigned int bb;
    unsigned long cc;
    unsigned long long dd;

    std::cout << sizeof(short) << std::endl; //shows the size 
    std::cout << sizeof(int) << std::endl;
    std::cout << sizeof(long) << std::endl;
    std::cout << sizeof(long long) << std::endl;
    std::cout << SHRT_MIN << std::endl; // This (#include <climits>) shows MINIMUM amount of bit in a short variable --- PLACE U IN FRONT FOR UNSIGNED VERSION
    std::cout << LLONG_MAX << std::endl; // This (#include <climits>) shows MAXIMUM amount of bit in a long long variable --- PLACE U IN FRONT FOR UNSIGNED VERSION
}