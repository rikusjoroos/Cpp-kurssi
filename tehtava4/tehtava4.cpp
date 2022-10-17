#include <iostream>

using namespace std;

void luvutTaulukkoon(int lukutaulukko[], int koko);
void kaannaTaulukko(int taulukko[], int koko);
void asetaLed(bool taulukko[][12], int korkeuspiste, int leveyspiste, bool arvo);
void tulostaLed(bool taulukko[][12],int korkeus, int leveys);
void alustaLed(bool taulukko[][12],int korkeus, int leveys);

int main()
{
    int lukutaulukko[10];
    luvutTaulukkoon(lukutaulukko,10);
    for(int i = 0 ; i <= 9 ;i++)
    {
        cout << lukutaulukko[i];
    }

    kaannaTaulukko(lukutaulukko ,10);

    for(int i = 0; i < 10 ; i++)
    {
        cout << lukutaulukko[i] << " \n";
    }

    bool naytto[16][12];

    alustaLed(naytto, 16, 12);

    tulostaLed(naytto, 16, 12);
   
    asetaLed(naytto, 8,6, true);

    asetaLed(naytto, 9,6, true);

    tulostaLed(naytto, 16, 12);


    system("pause");
    return 0;
}

void luvutTaulukkoon(int lukutaulukko[], int koko)
{
     cout << "Anna kymmenen lukua \n";

    for(int i = 0;i<=koko-1;i++)
    {
        cout << "Anna luku " << i+1; cout << ":" ;
        cin >> lukutaulukko[i];
    }
    cout << endl;
   
}

void kaannaTaulukko(int taulukko[], int koko)
{
    int j = koko - 1;
    int temp = 0;

    for(int i = 0;i<koko/2; i++, j--)
    {
        temp = taulukko[i];
        taulukko[i] = taulukko[j];
        taulukko[j] = temp;
    }
  
}

void asetaLed(bool naytto[][12],int korkeuspiste, int leveyspiste, bool arvo)
{
  naytto[korkeuspiste-1][leveyspiste-1] = arvo;
  
}

void tulostaLed(bool naytto[][12], int korkeus, int leveys)
{
    
     for(int i = 0; i<korkeus; i++)
    {
         for(int j = 0; j<leveys; j++)
    {
        cout << naytto[i][j] << " ";
    }
     cout << "\n";
    }

    cout << "\n \n";
}

void alustaLed(bool naytto[][12], int korkeus, int leveys)
{
    
     for(int i = 0; i<korkeus; i++)
    {
         for(int j = 0; j<leveys; j++)
    {
        naytto[i][j] = false;
    }
    }
}

