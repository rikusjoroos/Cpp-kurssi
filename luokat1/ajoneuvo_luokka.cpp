#include <iostream>

using namespace std;

class Ajoneuvo
{
    int nopeus;
    int kuljettaja; //1 = ihminen, 2 = robotti, 3 = tyhjä
    
    public:
    long tunnus; 

    Ajoneuvo()
    {
        nopeus = 0;
        kuljettaja = 3;
        srand(time(nullptr));
        tunnus = rand();
    }
    Ajoneuvo(int nopeus, int kuljettaja, long tunnus)
    {
        this->nopeus = nopeus;
        this->kuljettaja = kuljettaja;
        this->tunnus = tunnus;
    }

    void tulostaAjoneuvo()
    {
        cout << "nopeus: " << nopeus << " kuljettaja: " << kuljettaja << " tunnus: " << tunnus << endl;
    }

    
};

void onkoSama(Ajoneuvo a1, Ajoneuvo a2)
    {
        if(a1.tunnus == a2.tunnus)
        {
            cout <<"Kyseessa on sama ajoneuvo." << endl;
        }
        else
        {
            cout <<"Kyseessa on eri ajoneuvot." << endl;
        }
    }
int main()
{
    Ajoneuvo auto1;
    auto1.tulostaAjoneuvo();

    Ajoneuvo auto2(150, 1, 23232);
    auto2.tulostaAjoneuvo();

    Ajoneuvo auto3(150, 1, 23232);

    onkoSama(auto2, auto3);
    onkoSama(auto1, auto2);

    return 0;
}