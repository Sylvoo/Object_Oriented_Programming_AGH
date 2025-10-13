#include <cstdlib>
#include <ctime>
#include <iostream>

int main() {
    // initialize random number generator with current time
    srand(static_cast<unsigned int>(time(0)));
    // generate random number from 1 to 100
    int randomNumber = rand() % 100 + 1;

    std::cout << "-------------------------------------------------"<<std::endl;
    std::cout << "---------------RANDOM_NUMBER---------------------"<<std::endl;
    int guess = 0;
    do {
        std:: cout << "Just guess the number: ";
        std:: cin >> guess;
        
        if(guess > randomNumber)
        {
            std::cout<< "Too high number, try again: " <<std::endl;
            continue;
        }
        else if (guess < randomNumber)
        {
            std::cout<< "Too low number, try again: " <<std::endl;
            continue;
        }
        else
        {
            std::cout<<"Congratulations, you guessed!"; 
        } 
    } while (guess != randomNumber);
}