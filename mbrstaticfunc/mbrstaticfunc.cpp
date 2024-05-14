

#include <iostream>
#include<string>
using namespace std;

class Mahasiswa
{
private:
	static int nim;
public:
	int id;
	string nama;

	void setID();
	void printAll();

	static void setNIM(int pNim) { nim = pNim; /*Definisi Function*/ }
	static int getNim() { return nim; /*Definisi Function*/ }

	Mahasiswa(string pnama) :nama(pnama) { setID(); }

};


int Mahasiswa::nim = 0;

void Mahasiswa::setID()
{
	id = ++nim;
}

void Mahasiswa::printAll()
{
	cout << "ID = " << id << endl;
	cout << "Nama = " << nama << endl;
	cout << endl;
}

int main()
{
   
}



