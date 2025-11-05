#include<iostream>
#include<string>
#include<algorithm> // biblioteka do reverse()

std::string revStr(const std::string &str)
{
    int i = 0;
    int rev = 1;
    int len = str.length(); 
    std::string tempString;
    std::cout <<"len: "<<len<<std::endl;
    while(str[i] != '\0')
    {
        char temp = str[len-rev];
        tempString += temp;
        i++;
        rev++;
    }
    return tempString;
}

int main()
{
    std::string userStr;
    std::cout<<"Enter some text: ";
    std::getline(std::cin, userStr);
    int len = userStr.length();

    std::string revUserString = revStr(userStr);
    std::cout<<"\nReversed text without function: "<<revUserString;

    std::reverse(userStr.begin(), userStr.end()); 

    std::cout<<"\nwith reverse() function: "<<userStr<<std::endl;

    return 0;
}
