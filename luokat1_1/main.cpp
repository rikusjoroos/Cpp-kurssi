#include <iostream>
#include "user.h"

using namespace std;

int main()
{
    User u1 = User("Matti", 21);
    User u2 = User("Pekka", 65);
    u1.tulosta();
    u1.kayttajienMaara();
    cout << "maara: " << User::kayttajienMaara << endl;
    system("pause");
    return 0;
}