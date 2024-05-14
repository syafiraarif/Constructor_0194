
#include <iostream>
#include <string>
using namespace std;

class Mahasiswa
{
private:
	int nim;
	string nama;
public:
	Mahasiswa() 
	{
		nim = 0;
		nama = " ";
	}

	Mahasiswa(int iNim)
	{
		nim = iNim;
	}

	Mahasiswa(string);
	Mahasiswa(int iNim, string iNama);
	void cetak();
};


Mahasiswa::Mahasiswa(string Nama)
{
	nim = 0;
	nama = " ";
}

Mahasiswa::Mahasiswa(int iNim, string iNama)
{
	nim = iNim;
	nama = iNama;
}

void Mahasiswa::cetak()
{
	cout << endl << "Nim = " << nim << endl;
	cout << "Nama = " << nama << endl;
}

int main()
{
	Mahasiswa Syaf1;
	Mahasiswa Syaf2(20);
	Mahasiswa Syaf3("putri");
	Mahasiswa Syaf4(30, "syafira");

	Syaf1.cetak();
	Syaf2.cetak();
	Syaf3.cetak();
	Syaf4.cetak();

	system("pause");

	return 0;

}

