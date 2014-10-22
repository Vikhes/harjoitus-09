/**************************
*Ohjelman nimi:Harjoitus 9
*Tekij‰:Ville Hakola
*lyhyt kuvaus
*Tee ohjelma, joka toimii laskimena.
*K‰ytt‰j‰lt‰ kysyt‰‰n kaksi kokonaislukua,
*jonka j‰lkeen ohjelma antaa valikon
*laskutoimituksista.
*Versio:1.0
*PVM:08.10.2014
******************************/
#include <iostream>
using namespace std;
int main()
{
	cout << "Laskin" << endl;
	int Luku1;
	int Luku2;
	int Valikko;
	cout << "Anna ensimm‰inen luku"<<endl;
	cin >> Luku1;
	cout << "Anna toinen luku"<<endl;
	cin >> Luku2;
	cout << "VALIKKO" << endl;
	cout << "1. Summa" << endl;
	cout << "2. Erotus" << endl;
	cout << "3. Tulo" << endl;
	cout << "4. Osam‰‰r‰" << endl;
	cout << "5. Jakoj‰‰nnˆs" << endl;
	cout << "Valitkaa laskutoimitus: ";
	cin >> Valikko;
	if (Valikko == 1)
	{
		cout << "Lukujen summa on ";
		cout << (Luku1 + Luku2)<<endl;
	}
	if (Valikko == 2)
	{
		cout << "Lukujen erotus on ";
		cout << (Luku1-Luku2) << endl;
	}
	if (Valikko == 3)
	{
		cout << "Lukujen tulo on ";
		cout << (Luku1*Luku2) << endl;
	}
	if (Valikko == 4)
	{
		cout << "Lukujen osam‰‰r‰ on ";
		cout <<(float)(Luku1 / Luku2)<<endl;
	}
	if (Valikko == 5)
	{
		cout << "Lukujen jakoj‰‰nnˆs on ";
		cout << (Luku1%Luku2) << endl;
	

	}
}