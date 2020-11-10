#include <iostream>
using namespace std;

template<int A, int N> struct hiperszescian {
    enum
    {
        capacity = A * hiperszescian<A, N - 1>::capacity
    };
};
template<int A> struct hiperszescian <A, 0 > {
    enum { capacity = 1 };
};
template<> struct hiperszescian <-1, -1> {
    enum { capacity = -1 };
};

int main()
{
    cout << "Objetosc hiperszescianu wynosi: " << hiperszescian<3,5>::capacity;
    cout << endl;
    cout << hiperszescian<-1, -1>::capacity; 
}