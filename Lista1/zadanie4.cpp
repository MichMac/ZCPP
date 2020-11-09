#include <iostream>
#include <cmath>
#include <string>
#include <vector>
using namespace std;

template <typename T, int N> class Wektor
{
    T wektor[N];
    int suma = 0;
public:
    typedef T value_type; //to samo co using value_type = T;

    Wektor()
    {
        for (int i = 0; i < N; i++)
        {
            wektor[i] = 0;
        }
    }

    const T operator [] (int n) const { return wektor[n]; }  // wyswietlanie
    T& operator [] (int n) { return wektor[n]; } // nadpisywanie
    T operator * (vector<int> const& wek2)
    {
        for (int i = 0; i <= N - 1; i++)
        {
            //cout << suma << endl;
            suma += (wektor[i] * wek2[i]);
        }
        return suma;
    }
};

int main()
{
    cout << "Zadanie 4" << endl;
    Wektor <int, 3> wektor1;
    wektor1[0] = 2;
    wektor1[1] = 4;
    wektor1[2] = 2;
    vector <int> wektor2;
    wektor2.push_back(4);
    wektor2.push_back(3);
    wektor2.push_back(5);
    cout << wektor1 * wektor2 << endl;
}