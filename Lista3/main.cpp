#include "a.h"

int main()
{

    A obiekt1 = A("tekst");
    A obiekt2 = copy(obiekt1);
    A obiekt3 = copy(move(obiekt1));

    //puts(obiekt1.get());
    puts(obiekt2.get());
    puts(obiekt3.get());
}
