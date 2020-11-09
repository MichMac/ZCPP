#include <iostream>
#include <cmath>
#include <string>
using namespace std;

template <typename T, typename Y, typename Z>
inline auto add2(T a, Y b, Z c)
{
    return c(a, b);
}


int main()
{
    cout << "Zadanie 2" << endl;
    //wyrazenie lambda:    [](typ zmienna, typ zmienna2){return wyrazenie;}
    cout << "Dla typow numerycznych: "<< 
    add2(1, 2, [](int a, int b) {return a + b;}) << endl;

    cout << "Dla obiektow typu string: " << 
    add2("test1", "test2", [](string a, string b) {return a + b;}) << endl ;
}