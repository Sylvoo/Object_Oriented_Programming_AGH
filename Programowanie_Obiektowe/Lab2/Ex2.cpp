#include<iostream>
#include<string>
#include<algorithm> // biblioteka do reverse()

std::string revStr(std::string str)
{
    int i = 0;
    int rev = 1;
    int size = sizeof(str)/sizeof(str[0]); // 34 , gdy str = "papa"
    int len = str.length(); // 4, a wiec "\n" nie jest brane pod uwage
    std::string tempString;
    std::cout << "size: "<<size<<" len: "<<len<<std::endl;
    while(str[i] != '\0')
    {
        char temp = str[len-rev];
        tempString += temp;
        //tempString.push_back(temp);
        //tempString.std::insert(i,temp);
        i++;
        rev++;
        //std::cout<<"temp: "<<temp<<" tempStr: "<<tempString;
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

    std::cout<<"\nwith reverse() function: "<<userStr;

    return 0;
}