#ifndef AJONEUVO_H
#define AJONEUVO_H
#include "paikka.h"

class Ajoneuvo
{
    private:
    int nopeus;
    int renkaidenLkm;
    Paikka paikka;

    public:
    Ajoneuvo();
    void setNopeus(int nopeus);
    void setRenkaidenLkm(int renkaidenLkm);
    void setPaikka(Paikka paikka);
    int getNopeus();
    int getRenkaidenLkm();
    Paikka getPaikka();
};

#endif