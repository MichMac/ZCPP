#include <iostream>
#include <string>
#include <cstring>
using namespace std;

class A
{
public:
    char* c;

    //konstruktor przyjmujacy stala referencje do obiektu string
    A(const string& s)
        :c(new char[s.size() + 1])
    {
        memcpy(c, s.c_str(), s.size() + 1);
    }

    //konstruktor kopiujacy
    A(const A& x)
    {
        c = new char[strlen(x.c) + 1];
        memcpy(c, x.c, strlen(x.c) + 1);
    }

    //konstruktor przenoszacy
    A(A &&r)
    {
        c = r.c;
        r.c = nullptr;
    }

    char* get()
    {
        return c;
    }

    ~A()
    {
        delete[] c;
    };
};

//zadanie9
A copy(const A& L)
{
    return A(L);
}

A copy(A&& R)
{
    return A(move(R));
}
//