#include <iostream>
#include "user.h"

int User::maara = 0;
User::User(string nimi, int ika)
{
    this->nimi = nimi;
    this->ika = ika;
    maara++;
}

void User::tulosta()
{
    cout << "Kayttajan nimi: " << nimi << " Kayttajan ika: " << ika << endl;
}

void User::kayttajienMaara()
{
    cout << "Kayttajien maara: " << maara << endl;
}
