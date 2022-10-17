#include "matikka1.h"
#include "geometria.h"
#include <iostream>

using namespace std;
using namespace matikka1;
using namespace geometria;

int main()
{

    tulostaLuvut(10,20);
    int summa = 0;
    summa = summaaLuvut(1,10);
    cout << "Lukujen summa on: " << summa << endl;

    int kAla = 0;
    int yAla = 0;

    cout << "Kolmion ala: " << kolmionAla(5,10) << endl;
    cout << "Ympyran ala: " << ympyranAla(5) << endl;


    system("pause");
    return 0;
}
