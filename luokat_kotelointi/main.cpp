#include <iostream>
#include "ajoneuvo.h"
#include "paikka.h"

using namespace std;

int main()
{
    Ajoneuvo a1 = Ajoneuvo();
    Paikka p1 = Paikka();

    p1.setLatLong(42.12, 53.15);
    a1.setNopeus(120);
    a1.setRenkaidenLkm(4);
    a1.setPaikka(p1);

    cout << "a1 nopeus: "<< a1.getNopeus() << " a1 renkaiden määrä: " << a1.getRenkaidenLkm() 
    << " a1 lat: " << a1.getPaikka().getLat() << " a1 long: " 
    << a1.getPaikka().getLong() << endl;

    system("pause");
    return 0;
}