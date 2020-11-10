#include <iostream>
using namespace std;

template <typename T, typename Y>
 auto add1(T& a, Y& b)
{
    return a + b;
}

 template <typename T, typename Y>
 auto add1(T* a, Y* b)
 {
     return *a + *b;
 }

 template<>
 auto add1(const char* a, const char* b)
 {
     string s = a;
     return s + b;
 }


int main()
{
    int num1 = 10;
    int num2 = 20;
    int* wsk1 = &num1;
    int* wsk2 = &num2;
    const char* txt1 = "text1";
    const char* txt2 = "text2";

    cout << add1(num1, num2);
    cout << "Dodawanie liczb przekazanych przez wskazniki: " << add1(wsk1, wsk2);
    cout << endl;
    cout << "Dodawanie dwoch tekstow: " << add1(txt1,txt2);
    cout << endl;

}
