#include "vesiskootteri.h"
#include <iostream>

Vesiskootteri::Vesiskootteri()
{

}

Vesiskootteri::Vesiskootteri(int kuljettajienLkm):Ajoneuvo(kuljettajienLkm)
{
}




void Vesiskootteri::setRenkaidenLkm(int renkaidenLkm)
{
    Ajoneuvo::setRenkaidenLkm(renkaidenLkm);

    if(getRenkaidenLkm() != 0)
    {
        Ajoneuvo::setRenkaidenLkm(0);
    }
}

void Vesiskootteri::kuvaile()
{
    std::cout << "Tämä on vesiskootterluokka \n";
}

void Vesiskootteri::henkilot()
{
    std::cout << "Vesiskotterissa voi olla yksi henkilo \n";
}