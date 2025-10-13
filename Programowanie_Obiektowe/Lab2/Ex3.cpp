#include<iostream>
#include<algorithm>

// program ktory sprawdzi czy wpisane slowo jest palindromem 

bool isPalindrom(const std::string str)
{
    int len = str.length();
    for(int i = 0; i<len-1; i++)
    {
        char fromStar = str[i];
        char fromEnd = str[len-i-1];
        
        if(fromStar != fromEnd)
        return false;
        else return true;
    }
}


int main()
{
    std::string userInput;
    std::cout<<"Enter a word to check if it'a a palindrome: ";
    std::getline(std::cin, userInput);
    std::cout<<"\nNumbers 1/0 means that it is/isn't a palindrome: "<<isPalindrom(userInput);
    std::cout << "\nVersion with reverse()(below): \n";

    std::string temp = userInput;
    std::reverse(userInput.begin(), userInput.end());
    if(userInput == temp)
    {
        std::cout<<"This word is a palindrome!";
    }
    else
    {
        std::cout<< "This word is not a palindrome :( )";
    }

    return 0;
}