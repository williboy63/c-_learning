#include <iostream>
#include <climits>

int mainy()
{
    int age;
    std::cout <<"What your age? ";
    std::cin >> age;
    switch(age)
    {
        case 13:
            std::cout << "You are 13" << std::endl;
            break; //Not actually requiered, if no break will fall throught all cases. Return also works
        case 14:
            std::cout << "You are 14" << std::endl;
            break;
        default:
            std::cout << "Catch all" << std::endl;
            break;
    }
    return 0;
}

int main()
{
    enum class Seasons{summer, spring, fall, winter};
    Seasons now = Seasons::winter;
    switch(now)
    {
        case Seasons::summer:
            break;
        case Seasons::spring:
            break;
        case Seasons::fall:
            break;
        case Seasons::winter:
        std::cout << "Stay warm" << std::endl;
            break;
    }
    return 0;
}
    