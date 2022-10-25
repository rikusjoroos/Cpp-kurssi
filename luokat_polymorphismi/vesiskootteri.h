#ifndef VESISKOOTTERI_H
#define VESISKOOTTERI_H

#include "ajoneuvo.h"

class Vesiskootteri: public Ajoneuvo
{

    public:
    Vesiskootteri();
    Vesiskootteri(int kuljettajienLkm);
    void setRenkaidenLkm(int renkaidenLkm);
    void kuvaile();
    void henkilot();
};

#endif