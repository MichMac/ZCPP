//Zadanie 0

#include <iostream>

using namespace std;

class Bazowa {
public:
    virtual void vfun() { cout << "Bazowa wirtualna \n"; }
    void fun() { cout << "Bazowa nie wirtualna \n"; }
};

class Pochodna : public Bazowa {
public:
    void vfun() { cout << "Pochodna wirtualna \n"; }
    void fun() { cout << "Pochodna nie wirtualna \n"; }
};

int main()
{

    Bazowa* bazowa = new Pochodna();
    Pochodna* pochodna = new Pochodna();

    cout << "Wywolanie metody wirtualnej: " << endl;
    bazowa->vfun();
    pochodna->vfun();

    cout << "\n" << endl;

    cout << "Wywolanie zwyklej metody: " << endl;
    bazowa->fun();
    pochodna->fun();

    return 0;
}
