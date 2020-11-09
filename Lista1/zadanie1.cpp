#include <iostream>
using namespace std;

template <typename T, typename Y, typename Z>
inline T add1(Y& a, Z& b)
{
    return (a + b);
}


int main()
{
    string text1 = "text1";
    string text2 = "text2";
    int a = 10;
    int b = 20;
    double c = 15.25;
    cout << "Te same argumenty numeryczne: " << add1<int>(a, b);
    cout << endl;
    cout << "Argumenty o roznych typach numerycznych: " << add1<double>(c, a);
    cout << endl;
    cout << "Argumenty o typie string: " << add1<string>(text1, text2);
}
