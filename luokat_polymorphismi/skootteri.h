#ifndef SKOOTTERI_H
#define SKOOTTERI_H

#include "ajoneuvo.h"

class Skootteri: public Ajoneuvo
{

    public:
    Skootteri();
    Skootteri(int kuljettajienLKm);
    void setRenkaidenLkm(int renkaidenLkm);
    void kuvaile();
    void henkilot();
};

#endif