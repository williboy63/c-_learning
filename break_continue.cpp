#include <iostream>
#include <string>

int main()
{
    std::string sentence = "Hello my name is o Caleb";

    for(int i = 0; i < sentence.size(); i++)
    {
        
        if(sentence[i] == 'o')
        {
            continue;//If we hit 'o' it continue and doesn't execute, so this will print every char execpt 'o'
        }
        
        std::cout << sentence[i] << std::endl;





        if(sentence[i] == 'o') //This if statement explained BREAK;
        {
            std::cout << "Found o!\n";
            break; //The break will break out the closest loop you are in. In this case the char of the sentence string will print until the 'o' is found, then the for loop whill break and it will print : Done!
            
        }
    }
    std::cout << "Done!\n";
}