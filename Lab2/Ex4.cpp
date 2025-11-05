#include<iostream>
#include<cctype> // islower() itd
#include<string>

int charDetect(const std::string &str, char a)
{
    int num = 0;
    int len = str.length();
    a = tolower(a);

    for(auto i : str)
    {
        
        if(tolower(i) == a)
        {
            num++;
        }
    }
    return num;
/*
if(isupper(a))
    {
        temp = tolower(a);
    }
    else temp = toupper(a);

    for(int i = 0; i<len; i++)
    {
        if(str[i] == a || str[i] == temp)
        {
            num++;
        }
    }

    return num;
}
*/
}

int main()
{
    std::string userInput;
    char userChar;
    std::cout << "Enter a sentence: ";
    getline(std::cin, userInput);
    std::cout << "\nEnter the char to check it's apperances: ";
    std::cin >> userChar;

    std::cout<<"\nNumber of apperances: "<<charDetect(userInput, userChar)<<std::endl;

    return 0;
}
