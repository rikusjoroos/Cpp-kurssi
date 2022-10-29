#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    string name1 = "Riku";
    int age1 = 31;
    string name2 = "Esa";
    int age2 = 41;
    string line = "";

    fstream file;

    file.open("names.csv", ios::out);

    if(file.is_open())
    {
        file << name1 << "," << age1 << "\n";
        file << name2 << "," << age2 << "\n";
        file.close();
    }

    file.open("names.csv", ios::in);

    if (file.is_open())
    {
        while(getline(file, line))
        {
            string name;
            int age;
        }
    }


    return 0;
}