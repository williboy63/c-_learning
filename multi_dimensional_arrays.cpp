#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <fstream>
#include <ostream>

int main()
{
    
     int grades[][3]= {// The second box says how many arrays in the array
        {1, 2, 3}, 
        {4, 5, 6}, 
        {7, 8, 9}}; 

    
     for(int r = 0; r < 3; r++)
     {
        for(int c = 0; c < 3; c++)
        {
            
            std::cout << grades[r][c] << "\t";
        }
        std::cout << "\n";

     }
     
     return 0;

}