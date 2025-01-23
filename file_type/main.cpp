#include "header.h"


#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <fstream>



int main()
{
    srand(time(NULL)); //Since clock time always changes inside the main when it's called up, the sequence of random number will actually be random otherwise the senquence stays the same
    int choice;
    
    do 
    {
        std::cout << "0. Quit\n1. Play Game\n";
        std::cin >> choice;
    

        switch(choice)
        {

            case 0:
                std::cout << " Fuck you\n";
                return 0;
            case 1:
                std::cout <<  "Let's Go!\n";
                utilz::play_game();
                break;
        }

    }while(choice != 0);

}