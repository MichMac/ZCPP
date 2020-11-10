#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <stdexcept>

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
        try
        {
            if (N != wek2.size())
            {
                throw runtime_error("Wektory nie maja tyle samo skladowych");
            }
            else
            {
                for (int i = 0; i <= N - 1; i++)
                {
                    //cout << suma << endl;
                    suma += (wektor[i] * wek2[i]);
                }
                return suma;
            }
        }
        catch (const exception& e)
        {
            cout << e.what() << endl;
        }
        return 0;
    }
};

int main()
{
    cout << "Zadanie 4" << endl;

    Wektor <int, 3> wektor1;
    wektor1[0] = 2;
    wektor1[1] = 4;
    wektor1[2] = 3;

    vector <int> wektor2;
    wektor2.push_back(4);
    wektor2.push_back(3);
    wektor2.push_back(5);

    vector<int> wektor3;
    wektor3.push_back(3);
    wektor3.push_back(2);
    wektor3.push_back(6);
    wektor3.push_back(8);

    cout << wektor1 * wektor2 << endl;
    cout << wektor1 * wektor3 << endl;
    
}
