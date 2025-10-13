#include <iostream>
#include <vector>
#include <ctime> // 
#include <cstdlib>
// program zliczajacy sume nieparzystych wierszy i parzystych kolumn macierzy

std::vector<int> calcMatrix(std::vector<std::vector<int>> vec)
{
    int sumLines = 0;
    int sumColumns = 0;
    int itrLines = 0;
    int itrCol = 0;
    for (auto &lines : vec)
    {
        itrCol = 0;
        for(auto &i : lines)
            {
                if (itrLines % 2 != 0 && itrLines != 0)
                {
                    sumLines += i;
                }
                
                if(itrCol == 0 || itrCol % 2 == 0)
                {
                    sumColumns += i;
                }
                 itrCol += 1;
            }
        /*else 
        {
            for(auto i = 0; i < vec.size(); i++)
            {
                if(i%2 == 0  || i == 0)
                {
                    int temp = vec[itrLines][i];
                    sumColumns += temp;
                }
            }
        }
        */
        itrLines += 1;
    } 
    std::vector<int> sum{};
    sum.push_back(sumLines);
    sum.push_back(sumColumns);

    return sum;
}


int main()
{
    // initialize random number generator with current time
    srand(static_cast<unsigned int>(time(0)));
    

    int lines, column;
    std::cout<< "Give me a number of lines: ";
    std::cin >> lines;
    std::cout<< "\nGive me a number of columns: ";
    std::cin >> column;
    std::vector<std::vector<int>> matrix(lines,std::vector<int>(column,0));
    //std::cout<<"\n"<<randomNumber;
    //std::cout<<matrix.size();

    for (auto &row : matrix)
    {
        std::cout<<"\n";
        for (auto &i : row)
        {
            // generate random number from 0 to 9
            i = rand() % 10;
            std::cout<< i <<" ";
        }
    }

    std::cout<<"\n--------------------------------------------\n";
    std::vector<int> answer = calcMatrix(matrix);
    std::cout<< "Suma nieparzystych wierszy: "<<answer[0];
    std::cout<< "\nSuma parzystych kolumn: "<<answer[1];


    return 0;
}