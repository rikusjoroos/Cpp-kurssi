#include <iostream>
#include "ajoneuvo.h"
#include "paikka.h"
#include "vesiskootteri.h"
#include "skootteri.h"

using namespace std;

void tulostaAjoneuvo(Ajoneuvo& olio);

int main()
{
   //perus dynaamisen muistin käyttö:
    int* iptr = new int;
    int* aptr = new int[10];

    *iptr = 5;
    aptr[3] = 12;

    //dynaaminen muisti polymorphismi olioilla:
    Ajoneuvo *a1 = new Vesiskootteri(); //&referenssi ajoneuvoluokkaan
    a1->kuvaile();
    Ajoneuvo *a2 = new Skootteri; 
    a2->kuvaile();

    tulostaAjoneuvo(*a2);

    delete iptr;
    delete aptr;
    delete a1;
    delete a2;
    system("pause");
    return 0;
}

void tulostaAjoneuvo(Ajoneuvo& olio)
{
    olio.kuvaile();
}