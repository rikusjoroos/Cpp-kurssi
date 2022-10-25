#include "skootteri.h"
#include <iostream>

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

void Skootteri::kuvaile()
{
    std::cout << "Tämä on skootteriluokka\n";
}

void Skootteri::henkilot()
{
    std::cout << "Skootterissa voi olla 2 henkiloa\n";
}