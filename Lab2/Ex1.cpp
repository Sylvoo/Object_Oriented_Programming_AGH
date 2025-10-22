#include <iostream>
#include <vector>
#include <ctime> 
#include <cstdlib>

int doMatrix(std::vector<std::vector<int>> vec); 

int main()
{
    srand(static_cast<unsigned int>(time(0)));
    

    int lines, column;
    std::cout<< "Give me a number of lines: ";
    std::cin >> lines;
    std::cout<< "\nGive me a number of columns: ";
    std::cin >> column;
    std::vector<std::vector<int>> matrix(lines,std::vector<int>(column,0));

    for (auto &row : matrix)
    {
        std::cout<<"\n";
        for (auto &i : row)
        {
            i = rand() % 10;
            std::cout<< i <<" ";
        }
    }

    std::cout<<"\n--------------------------------------------\n";
    int answer = doMatrix(matrix);
    std::cout << "Sum: " << answer << "\n";


    return 0;
}

int doMatrix(std::vector<std::vector<int>> vec)
{
    int sum = 0;
    for (auto i = 0; i < vec.size() ; i++)
    {
        for (auto j = 0; j < vec[i].size() ; j++)
        {
            if(i%2 !=0 || j%2 == 0)
            {
                sum += vec[i][j];
            }
        }   
    }
    return sum;
}