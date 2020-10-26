#include <iostream>
using namespace std;

template <typename T, typename Y, typename Z>
 T add1(Y a, Z b)
{
    return a + b;
}

template <>
int add1(int* a, int* b)
 {
    return *a + *b;
 }

template<> 
string add1(const char* a, const char* b)
{
    string result;
    result += a;
    result += b;
    return result;
}

int main()
{
    int num1 = 10;
    int num2 = 20;
    int* wsk1 = &num1;
    int* wsk2 = &num2;
    const char* txt1 = "text1";
    const char* txt2 = "text2";

    cout << "Dodawanie liczb przekazanych przez wskazniki: " << add1<int>(wsk1, wsk2);
    cout << endl;
    cout << "Dodawanie dwoch tekstow: " << add1<string>(txt1,txt2);
    cout << endl;

}
