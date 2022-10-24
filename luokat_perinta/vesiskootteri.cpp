#include "vesiskootteri.h"

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