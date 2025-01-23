#include <iostream>
#include <string>

int mainy()
{
    int age;
    std::cout <<"How old : ";
    std::cin >> age;
    if(age < 16)
    {
        std::cout <<"Not old enough" << std::endl;
        return 0;    
    }
    else if (age < 19)
    {
        std::cout << " Almost" << std::endl;
    }
    
    else
    {
        std::cout << "You good" << std::endl;
    }
    return 0;
}   

int main()
{
    int age_answer = 69; 
    int age_guess;
    std::cout << "Guess my age? ";
    std::cin >> age_guess;

    std::string answer = "Caleb";
    std::string guess;
    std::cout << "Guess who? ";
    std::cin >> guess;
    
    if (guess == answer && age_guess == age_answer) //&& == and ; || == or ; ! == not ; !(True) = False
    {
        std::cout << "You good" << std::endl;
    }
    else std::cout <<"You suck" << std::endl;
}