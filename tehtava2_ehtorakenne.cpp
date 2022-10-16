#include <iostream>
#include <locale>


using namespace std;

int main()
{

setlocale(LC_ALL, "finnish");
int x;
int y;

cout << "Anna kaksi lukua\nEnsimmainen luku:";
cin >> x;
cout << "Toinen luku:";
cin >> y;

if(x >= 10 * y)
{
    cout << "Annoitpa ison ensimmäisen luvun :O";

}
else
{
    cout << "Esimmainen luku on alle 10 kertaa isompi";
}


cout << "\nAnna ikasi:";

int ika;

cin >> ika;

if(ika <= 3 && ika >= 0)
{
    cout << "Olet vauva.";
} 
else if(ika <= 15 && ika >= 4)
{
    cout << "Olet lapsi.";
}
else if(ika <= 18 && ika >= 16)
{
    cout << "Olet teini.";
}
else if(ika <= 25 && ika >= 19)
{
    cout << "Olet nuori aikuinen.";
}
else
{
    cout << "Olet aikuinen.";
}


int annettuluku;

cout << "\nAnna luku valilta 0-9:";

cin >> annettuluku;

switch (annettuluku)
{
case 0:
    cout << "nolla";
    break;
case 1:
    cout << "yksi";
    break;
case 2:
    cout << "kaksi";
    break;
case 3:
    cout << "kolme";
    break;
case 4:
    cout << "nelja";
    break;
case 5:
    cout << "viisi";
    break;
case 6:
    cout << "kuusi";
    break;
case 7:
    cout << "seitseman";
    break;
case 8:
    cout << "kahdeksan";
    break;
case 9:
    cout << "yhdeksan";
    break;
default:
    cout << "Virheellinen syote";
    break;
}




int kuukausi;

cout << "\nAnna kuukausi numerona (0-12):";
cin >> kuukausi;

switch(kuukausi)
{
    case 2:
    cout << "Kuukaudessa on 28 paivaa (karkausvuonna 29)";
    break;
    case 4:
    case 6:
    case 9:
    case 11:
    cout << "Kuukaudessa on 30 paivaa";
    break;
    default:
    cout << "kuukaudessa on 31 paivaa";
}




return 0;

}
