
#include <iostream>
using namespace std;

class Mahasiswa 
{
    static int nim;
    int id;
    string nama;

    void setID();
    void printAll();

    Mahasiswa(string pnama) : nama(pnama) 
    {
        setID();
    }
};

int main()
{
    
}

