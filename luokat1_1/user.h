#ifndef USER_H
#define USER_H
#include <string>

using namespace std;

class User
{
    private:
    int ika;
    string nimi; 
    

    public:
    User(string nimi, int ika);
    static int maara;
    void tulosta();
    void kayttajienMaara();
   
};

#endif