#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>


void print_array(int array[], int count)
{
    for (int i = 0 ; i < count; i++)
    {
        std::cout << array[i] << "\t";
        
    }
    
    std::cout << "\n";
}



void play_game()
{
    int guesses[250];
    int guess_count = 0;

    int random = rand() % 251; //Generate a random number from 0 to 250
    std::cout << "Guess the number: ";
    while(true)
    {

        int guess;
        std::cin >> guess;

        guesses[guess_count++] = guess;

        if (guess == random)
        {
            std::cout << "Congrats!" << std::endl;
            std::cout << "Took you " << guess_count << " guesses to find the number" << std::endl;
            break;
        } else if(guess < random)
        {
            std::cout << "Too low\n";
        } else 
        {
            std::cout << "Too high\n";
        }
    }
    print_array(guesses, guess_count);

}



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
                std::cout << "Let's Go!\n";
                play_game();
                break;
        }

    }while(choice != 0);

}