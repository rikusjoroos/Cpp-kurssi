#include <iostream>
#include <string>
#include <fstream>
#include <vector>

using namespace std;

int main()
{
    string name1 = "Riku";
    int age1 = 31;
    string name2 = "Esa";
    int age2 = 41;
    string line = "";
    vector<int> vector;

    fstream file;

    file.open("names.csv", ios::out);

    if(file.is_open())
    {
        file << name1 << "," << age1 << "\n";
        file.close();
    }

    file.open("names.csv", ios::in);

    if (file.is_open())
    {
        getline(file, line, ',');
        string name = line;

        cout << line << endl;

        line = "";
        
        getline(file, line, ',');
        string age = line;
        cout << age;
        int age3 = 0;

        age3 = stoi(age);

        cout << age3 << endl;

        if(age3 > 2)
        {
            cout << age3 << " is greater than 2" <<endl;
        }
        

        

      
    }

    

    system("pause");
    return 0;
}