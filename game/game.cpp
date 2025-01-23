#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <fstream>


void print_vector(std::vector<int> vector)
{
    for (int i = 0 ; i < vector.size(); i++)
    {
        std::cout << vector[i] << "\t";
        
    }
    
    std::cout << "\n";
}



void play_game()
{
    std::vector<int> guesses;
   
    int count;
    int random = rand() % 251; //Generate a random number from 0 to 250
    std::cout << "Guess the number: ";

    std::cout << random << std::endl;

    while(true)
    {

        
        int guess;
        std::cin >> guess;
        count++;

        guesses.push_back(guess);

        if (guess == random)
        {
            std::cout << "Congrats!" << std::endl;            
            std::cout << "Took you " << guesses.size() << " guesses to find the number" << std::endl;
            break;
        } else if(guess < random)
        {
            std::cout << "Too low\n";
        } else 
        {
            std::cout << "Too high\n";
        }
    }

    std::ifstream input("best_score.txt");
    if(!input.is_open())
    {
        std::cout << "Unable to read\n";
        return;
    }

    int best_score;
    input >> best_score;

    std::ofstream output("best_score.txt");
    if(!output.is_open())
    {
        std::cout << "Unable to read\n";
        return;
    }

    if(count < best_score)
    {
        std::cout << "Congrats you, new high score!\n";
        output << count;
        
    }
    else
    {
        std::cout << "High Score Remains : " << best_score << std::endl;
        output << best_score;
        
    }



    print_vector(guesses);

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