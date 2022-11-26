#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

// ENCAPSULATION
// amac� class i�erisinde tan�mlanan private �zelliklerine eri�im sa�lamakt�r.
// get metotlar� ile �zelliklerin de�erlerini getiririz.
// set metotlar� ile �zelliklerin de�erlerini de�i�tiririz.


class Kitap
{
	// private �zellikler
	// private �zelliklere d��ar�dan eri�im sa�lanamamaktad�r.
	// gizli �zelliklerdir.d��ar�ya kapal�d�r.
	
	private:
		string kitapAdi = "Kitap 1";
		string yazar = "Veysel";
		int sayfaSayisi = 256;
		
	// private �zelliklere eri�im sa�layabilmek i�in ayn� class i�erisinde public metotlat tan�mlan�r.
	// private �zelliklere bu metotlar �zerinden eri�im sa�lan�r.
	public:
		string getKitapAdi()
		{
			return this->kitapAdi;
		}
		void setKitapAdi(string kitapAdi)
		{
			this->kitapAdi = kitapAdi;
		}
		string getYazar()
		{
			return this->yazar;
		}		
		void setYazar()
		{
			string yeniYazar;
			cout << "Yeni yazarin ismini giriniz: ";
			cin >> yeniYazar;
			this->yazar = yeniYazar;
		}
		int getSayfaSayisi()
		{
			return this->sayfaSayisi;
		}
		void setSayfaSayisi(int sayfaSayisi)
		{
			this->sayfaSayisi = sayfaSayisi;
		}
};

int main() {
	
	Kitap kitap1;
	kitap1.setKitapAdi("Istanbul Hatirasi");
	kitap1.setSayfaSayisi(300);
	kitap1.setYazar();
	cout << kitap1.getKitapAdi() << endl;
	cout << kitap1.getSayfaSayisi() << endl;
	cout << kitap1.getYazar() << endl;
	return 0;
}
