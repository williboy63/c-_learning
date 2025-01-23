#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <vector>


int main()
{
    std::vector<int> data = {1, 2, 3};
    data.push_back(12);
    std::cout << data[data.size() - 1] << std::endl; 
    data.pop_back(); //This removes the last element of the vector
    std::cout << data.size() << std::endl;
    //LIST OF VECTOR FUNCTIONS
    /*
    vector.assign() - Assign new value to the vector by replacing the old ones
    vector.erase() - Remove elements from specified position or range
    vector.insert() - Insert new element right before specific position
    vector.swap() - Swap the content of one vector into another (needs to be same type)
    vector.clear() - Removes all element in a vector
    vector.emplace() - Extends the container by inserting new element at position
    vector.emplace_back() - Insert new element into the vector container, new element is added to the end of the vector
    */
}