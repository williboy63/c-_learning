#include <iostream> //"#inclue" == import
#include <cmath>

//using namesace std == This would import function or object directly from std, so  std::cout << becomes cout <<
//using std::count == This would only import the specified function or object, so  std::cout << becomes cout << BUT cin >> is an error

int main() //The main function is automatically called when laun  ching program
{
    int slices; //int is the type of variable, int for integer (0,1,2,3,...)
    slices = 5; // or int slices = 5; 
    std::cout << "How many slices do you have : "; //cout == console out (data going out)
    std::cin >> slices; // cin == console in (input from user)
    std::cout <<"You have " << slices << " slices of pizza." << std::endl;

    
}



