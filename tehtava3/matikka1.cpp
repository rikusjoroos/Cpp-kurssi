#include "matikka1.h"
#include <iostream>

int matikka1::korotaPotenssiin(int arvo, int potenssi)
{
    int result = 1;
    for (int i = 0; i < potenssi; i = i + 1)
    {
        result = result * arvo;

    }
    return result;
}

void matikka1::nelio(int &luku)
{
    luku *= luku;
}

void matikka1::tulostaLuvut(int a, int b)
{
    for(int i = a; i<=b; i++)
    {
        std::cout << i << std::endl;
    }
}

int matikka1::summaaLuvut(int a, int b)
{
    int result = 0;
    for(int i = a; i<=b; i++)
    {
        result = result + i;

        
    }
    return result;
}

