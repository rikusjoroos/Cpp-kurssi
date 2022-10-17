#include <iostream>
#include "matikka.h"

using namespace std;
using namespace matikka;

int main()
{
    cout << korotaPotenssiin(10,2) << endl;

    int arvo = 2;

    nelio(arvo);

    cout << arvo << endl;

    system("pause");
    return 0;
}