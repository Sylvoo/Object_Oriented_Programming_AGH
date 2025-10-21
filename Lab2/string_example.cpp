#include <iostream>

/*
std::string s1	  Podstawowa inicjalizacja, pusty string
std::string s2(s1)	  s2 jest kopią s1
std::string s2 = s1	  To samo co s2(s1)
std::string s3("value")	  s3 posiada kopię literału znakowego (bez znaku terminującego)
std::string s3 = "value"	  To samo co s3("value")
std::string s4(n, 'c')	  s4 posiada "n" kopii znaku "c"
*/

/*
os << s Wpisuje s do strumienia os (np. std::cout); zwraca os
is >> s	  Czyta string (whitespace-separated) z is (np. std::cin) do s; zwraca is
getline(is, s)	  Czyta całą linie z is (np. std::cin) do s; zwraca is
s.empty() Zwraca "true" jeśli string jest pusty
s.size() Zwraca liczbę znaków w s
s[n] Zwraca referencję na "n-ty" element s
s1 + s2 Zwraca konkatenację s1 i s2
s1 = s2	  Kopiuje znaki z s2 do s1
s1 == s2
s1 != s2	  Stringi są równe jeśli są równej długości i posiadają te same znaki (case-sensitive)
<, <=, >, >=	  Takie same znaczenie jak słownikowe porównania (case-sensitive)
*/

int main()
{
    std::string s = "Ala ma kota";
    std::string o(s); // s2 = s1	  To samo co s2(s1)

    std::cout << s<<"\n";
    std::cout << o<<"\n"; 
    std::cout << s.size()<<"\n";
    
    
    return 0;
}