#include <iostream>
#include <vector> // required header

/*
std::vector<T> v1 -> wektor elementów o typie T; domyślna inicjalizacja pustego wektora
std::vector<T> v2(v1) -> v2 posiada kopię każdego elementu z v1
std::vector<T> v2 = v1	->  to samo co v2(v1)
std::vector<T> v3(n, value)	->  v3 posiada "n" elementów o wartości "value"
std::vector<T> v4(n)	 -> v4 posiada "n" elementów o domyślnej wartości
std::vector<T> v5 {a, b, c ...}	->  v5 posiada wszystkie elementy z podanej listy inicjalizacyjnej
*/

/*
v.empty()
  Zwraca "true" jeśli wektor jest pusty
v.size() 	  Zwraca liczbę elementów wektora
v.push_back(t)	  Dodaje element "t" na koniec wektora
v.at(n)	  Zwraca referencję na "n-ty" element wektora ORAZ sprawdza poprawność indeksu rzucając wyjątek w przypadku błędu
v[n]	  Zwraca referencję na "n-ty" element wektora
v1 = v2	  Przypisuje v1 kopię elementów z v2
v1 == v2
v1 != v2	  Wektory są równe jeśli mają taką samą liczbę elementów i każdy z elementów jest taki sam w obu wektorach
 <, <=, >, >=	  Takie same znaczenie jak słownikowe porównania
*/


int main() {
    // default initialization of vector of ints, myVector is empty
    std::vector<double> myVector;
    
    // use push_back() to append some elements to the vector
    myVector.push_back(10);
    myVector.push_back(20);
    myVector.push_back(30);
    
    // use size() to get the current vector size
    for (int i = 0; i < myVector.size(); ++i) {
        std::cout << myVector[i] << " ";
    }
    std::cout << std::endl;

    /*
    std::vector<int> v{1,2,3,4,5,6,7,8,9};
    for (auto &i : v) { // for each element in v (note: i is a reference)
    // square each element
    i *= i; // reference allows us to modify values in vector
    }
    for (auto i : v) { // for each element in v
    std::cout << i << " "; // i is a copy of a value
    }
    std::cout << std::endl;
    */

    std::vector<int> v1{50,60,70};
    for (auto &i : v1)
    {
        i *= i;
    }
    for (auto i : v1)
    {
        std::cout << i << " ";
    }

    return 0;
}