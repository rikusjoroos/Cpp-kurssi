#ifndef AJONEUVO_H
#define AJONEUVO_H
#include "paikka.h"

class Ajoneuvo
{
    private:
    int nopeus;
    int renkaidenLkm;
    Paikka paikka;
    int kuljettajienLkm;

    public:
    Ajoneuvo();
    Ajoneuvo(int kuljettajienLkm);
    void setNopeus(int nopeus);
    void setRenkaidenLkm(int renkaidenLkm);
    void setPaikka(Paikka paikka);
    int getNopeus();
    int getRenkaidenLkm();
    void setKuljettajienLkm();
    int getKuljettajienLkm();
    Paikka getPaikka();
    virtual void kuvaile();
    virtual void henkilot() = 0;
};

#endif