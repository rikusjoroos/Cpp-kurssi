#include "skootteri.h"

Skootteri::Skootteri()
{}

Skootteri::Skootteri(int kuljettajienLkm):Ajoneuvo(kuljettajienLkm)
{}

void Skootteri::setRenkaidenLkm(int renkaidenLkm)
{
    Ajoneuvo::setRenkaidenLkm(renkaidenLkm);

    if(getRenkaidenLkm() != 2)
    {
        Ajoneuvo::setRenkaidenLkm(2);
    }
}