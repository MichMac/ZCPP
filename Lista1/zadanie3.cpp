#include <iostream>
#include <cmath>
#include <string>

using namespace std;

template <typename T, int N> class Wektor
{
    T wektor[N];
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
 

    /*void show (int value)
    {
        cout<<"Skladowa "<<value<<" ma wartosc "<<wektor[value]<<endl;
    }

    void modify (int n)
    {
        cout<<"Podaj nowa wartosc skladowej: ";
        cin>>wektor[n];
    }
    */
};



int main()
{ 
        cout<<"Zadanie 3"<<endl;
        Wektor <int, 5> wektor1;
        cout<<"Skladowa wektora "<< 4 <<" ma wartosc "<<wektor1[4]<<endl;
        wektor1[4]=5;
        cout<<"Skladowa wektora "<< 4 <<" ma po zmanie wartosc "<<wektor1[4]<<endl<<endl; 
}