#include <iostream>
#include "ajoneuvo.h"
#include "paikka.h"

Ajoneuvo::Ajoneuvo()
{
    
}

void Ajoneuvo::setNopeus(int nopeus)
{
    this->nopeus = nopeus;
}

void Ajoneuvo::setRenkaidenLkm(int renkaidenLkm)
{
    this->renkaidenLkm = renkaidenLkm;
}

void Ajoneuvo::setPaikka(Paikka paikka)
{
    this->paikka = paikka;
}

int Ajoneuvo::getNopeus()
{
    return nopeus;
}

int Ajoneuvo::getRenkaidenLkm()
{
    return renkaidenLkm;
}

Paikka Ajoneuvo::getPaikka()
{
    return paikka;
}

