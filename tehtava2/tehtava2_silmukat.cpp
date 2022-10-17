#include <iostream>
using namespace std;

int main()
{
    int summa = 0;

    for(int i=1;i<=10;i++)
    {
        summa += i;
    }
    cout << "Summa: "<< summa <<endl;

    int i = 1;
      while(i <= 100)
    {
        bool onkoAlkuLuku = true;

        for(int j = 2; j <= i-1; j++)
        {
            if(i % j == 0)
            {
                onkoAlkuLuku = false;
                break;
            }
        }
        if(onkoAlkuLuku)
            cout << "luku:" << i << " on alkuluku" << endl;
        else
            cout << "luku:" << i << " ei ole alkuluku" << endl;
            i++;
    }

    cout << "Anna kaksi lukua. \nLuku yksi: ";
    int luku1;
    int luku2;
    cin >> luku1;
    cout << "Luku kaksi: ";
    cin >> luku2;
    int iluku;
    int pluku;
    if(luku1>luku2)
    {
        iluku = luku1;
        pluku = luku2;
    }
    else
    {
        iluku = luku2;
        pluku = luku1;
    }

    int laskuri = pluku ;

    while(laskuri > 0)
    { 
        if(pluku%laskuri==0 & iluku%laskuri==0)
        {
            cout << "Isoin yhteinen jakaja on: " <<laskuri << endl;
            break;

        }

        laskuri --;
    }



    system("pause");
    return 0;
}