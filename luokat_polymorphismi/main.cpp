#include <iostream>
#include "ajoneuvo.h"
#include "paikka.h"
#include "vesiskootteri.h"
#include "skootteri.h"

using namespace std;

void tulostaAjoneuvo(Ajoneuvo& olio);

int main()
{
    Vesiskootteri vesiskootteri;
    Skootteri skootteri;

    Ajoneuvo& a1 = vesiskootteri; //&referenssi ajoneuvoluokkaan
    a1.kuvaile();
    Ajoneuvo& a2 = skootteri; 
    a2.kuvaile();

    tulostaAjoneuvo(a2);



    system("pause");
    return 0;
}

void tulostaAjoneuvo(Ajoneuvo& olio)
{
    olio.kuvaile();
}