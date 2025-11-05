#include<iostream>
#include<algorithm>
#include<string>



bool isPalindrom(const std::string str)
{
    int notPali = 0;
    int len = str.length();
    for(int i = 0; i<len; i++)
    {
      
        std::cout<<"-------------"<<len<<std::endl;
        char fromStar = str[i];
        char fromEnd = str[len-i-1]; // abva 
        
        if(fromStar != fromEnd)
        {
            return false;
        } 
    }
    return true;
}


int main()
{
    std::string userInput;
    std::cout<<"Enter a word to check if it'a a palindrome: ";
    std::getline(std::cin, userInput);
    std::cout<<"\nIt is palindrome: "<<isPalindrom(userInput);
    std::cout << "\nVersion with reverse(): \n";

    std::string temp = userInput;
    std::reverse(userInput.begin(), userInput.end());
    if(userInput == temp)
    {
        std::cout<<"This word is a palindrome!";
    }
    else
    {
        std::cout<< "This word is not a palindrome";
    }

    return 0;
}
