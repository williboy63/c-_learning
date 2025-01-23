#include <iostream>
#include <string>

int main()
{
    //do while loops repeats the "do" loop untile the "while" condition is respected
    std::string password = "hellotacos123";
    std::string guess;
    do 
    {
        std::cout << "Guess the password: ";
        std::cin >> guess;

    } while(guess != password);
}