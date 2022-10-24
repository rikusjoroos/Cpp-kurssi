#include <iostream>
#include "ajoneuvo.h"
#include "paikka.h"
#include "vesiskootteri.h"
#include "skootteri.h"

using namespace std;

int main()
{
    Vesiskootteri v1 = Vesiskootteri();

    Ajoneuvo a2 = Ajoneuvo(2);
    Vesiskootteri v2 = Vesiskootteri(6);
    Skootteri s1 = Skootteri (12);
    v1.setNopeus(100);
    v1.setRenkaidenLkm(5);

    cout << "Renkaiden lkm: " << v1.getRenkaidenLkm() << endl;

    cout << "kuljettajien lkm: " << a2.getKuljettajienLkm() << endl;
    cout << "kuljettajien (vesiskootteri) lkm: " << v2.getKuljettajienLkm() << endl;
    cout << "kuljettajien (skootteri) lkm: " << s1.getKuljettajienLkm() << endl;





   

    system("pause");
    return 0;
}