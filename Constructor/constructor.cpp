#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string>

using namespace std;

// Constructorlarda geri d�n�� tipi veya void yazmam�za gerek yoktur.
// Constructurlar private k�sm�na hi�bir zaman yaz�lmaz.
// Constructurlar class ile ayn� isimde olur.

class Bilgisayar
{
	private:
		int agirlik;
		string islemci;
		int ram;
		
	public:
		//Yap�c� Constructor
		Bilgisayar()
		{
			cout << "Constructor Baslatildi." << endl;
			this->agirlik = 15;
			this->islemci = "Inteli5";
			this->ram = 8;
		}
		
		//Y�k�c� Constructor
		~Bilgisayar()
		{
			cout << "Constructur Kapatildi." << endl;
		}
		
		string getIslemci()
		{
			return this->islemci;
		}
		void setIslemci(string islemci)
		{
			this->islemci = islemci;
		}		
};

int main()
{
	
	Bilgisayar bilgisayar;
	
	string islemci = bilgisayar.getIslemci();
	cout << islemci << endl;
	bilgisayar.setIslemci("AMD Ryzen");
	islemci = bilgisayar.getIslemci();	
	cout << islemci << endl;
	
	
	return 0;
}
