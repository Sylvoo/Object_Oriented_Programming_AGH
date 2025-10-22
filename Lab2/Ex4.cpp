#include<iostream>
#include<cctype> // islower() itd

int charDetect(const std::string str, char a)
{
    int num = 0;
    int len = str.length();
    char temp = NULL;

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

int main()
{
    std::string userInput;
    char userChar;
    std::cout << "Enter a sentence: ";
    getline(std::cin, userInput);
    std::cout << "\nEnter the char to check it's apperances: ";
    std::cin >> userChar;

    std::cout<<"\nNumber of apperances: "<<charDetect(userInput, userChar);

    return 0;
}