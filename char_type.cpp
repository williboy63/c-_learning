#include <iostream>
#include <climits>

int main()
{ // You have to use single quotes for char (''), double quotes are reserved for strings ("")
    char x = 65; // MAX 127
     //char type can return letters using a number, ex: if char x = 65; then std::cout << (int) x << std::endl; will preint the letter A (check ASCII list)
    unsigned char x = 185; // MAX 255
    std::cout << (int) x << std::endl;
}