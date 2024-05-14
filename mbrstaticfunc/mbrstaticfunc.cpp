

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
	Mahasiswa mhs1("Sri Ddi");
	Mahasiswa mhs2("Budi Jatmiko");
	Mahasiswa::setNIM(9);
	Mahasiswa mhs3("Andi Janu");
	Mahasiswa mhs4("Joko Wahono");

	mhs1.printAll();
	mhs2.printAll();
	mhs3.printAll();
	mhs4.printAll();


	system("pause");

	return 0;
}



