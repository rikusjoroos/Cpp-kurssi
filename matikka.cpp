#include "matikka.h"

int matikka::korotaPotenssiin(int arvo, int potenssi)
{
    int result = 1;
    for (int i = 0; i < potenssi; i = i + 1)
    {
        result = result * arvo;

    }
    return result;
}

void matikka::nelio(int &luku)
{
    luku *= luku;
}