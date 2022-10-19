#include <iostream>
using namespace std;

void vaihdaArvot(int &x, int &y);
void vaihdaArvotPtr(int* x, int* y);
void tulostaArray(float* ptr, int koko);

int main()
{
    int luku1 = 4;
    int luku2 = 6;

    cout << "luku1: " << luku1 << " luku2: " << luku2 << " ";

    vaihdaArvot(luku1, luku2);

    cout << "luku1: " << luku1 << " luku2: " << luku2 << endl;

    int luku3 = 10;
    int luku4 = 20;

    cout << "luku3: " << luku3 << " luku4: " << luku4 << " ";

    vaihdaArvotPtr(&luku3, &luku4);

    cout << "luku3: " << luku3 << " luku4: " << luku4 << endl;

    float taulukko[] = {1.2333, 2.3342, 3.32342, 4.333};

    float* ptr = taulukko;


    tulostaArray(ptr, 4);



    return 0;
}

void vaihdaArvot(int &x, int &y)
{
    int temp = 0;

    temp = x;
    x = y;
    y = temp;

    
}

void vaihdaArvotPtr(int* x, int* y)
{
    int temp = 0;

    temp = *x;
    *x = *y;
    *y = temp;

}

void tulostaArray(float* ptr, int koko)
{
    for(int i=0; i<=koko-1; i++)
    {
        cout << *ptr++ << " ";
    }
}

    