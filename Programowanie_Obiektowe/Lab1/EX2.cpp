#include<iostream>

int main()
{
    
    int number = 0;
    int arr[5];
    int size = sizeof(arr)/sizeof(arr[0]); 
    for(int i = 0 ; i < size ; i++)
    {
        std::cout<<"Tell me "<<i+1<<" number: ";
        std::cin>>number;
        arr[i] = number;
    }

  
    for(int i = 0; i<size; i++)
    {
        std::cout << arr[i] <<std::endl;
    }
    return 0;
}