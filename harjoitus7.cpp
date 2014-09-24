/*
TATU REIJONEN - IIO14S2

Harjoitus 7 (palautus vko 40)

Tee ohjelma, joka kysyy käyttäjältä nimen, pituuden sentteinä ja painon kiloina.
Ohjelma laskee ja tulostaa käyttäjän ihannepainon (pituus-100). Lisäksi
ohjelma kertoo käyttäjän nykyisen painon eron kiloina verrattuna ihanne-
painoon. Ohjelman käyttöliittymä toimii seuraavasti:

Ihannepaino

Ohjelma laskee ihannepainosi
pituutesi perusteella.

Anna nimesi > Mooses
Anna pituutesi sentteinä > 175
Anna osoitteesi > Peikkovuori 5 as 4
Anna painosi kiloina > 89


Arvoisa Mooses
Osoitteesi on Peikkovuori 5 as 4
Nykyinen painosi 89.0 kg
Ihannepainosi 75.0 kg
Erotus 14.0 kg

b) käytä cin/cout/cin.get... olioita ohjelman
toteuttamiseen (c++ metodit, kirja sivu 92 - 99)

_________________________________________________________________________


*/

#include <iostream> 
using namespace std;
int main()

{
	char nimi[15], osoite[20];
	float pituus, paino;
	
	cout << "Anna nimesi: ";
	cin >> nimi;

	cout << "Anna pituutesi senttimetreinä: ";
	cin >> pituus;

	cout << "Anna osoitteesi: ";
	cin >> osoite;

	cout << "Anna painosi kilogrammoina: ";
	cin >> paino;

	
	cout << "Arvoisa " << nimi <<
		"\nOsoitteesi on " << osoite <<
		"\nNykyinen painosi on " << paino << "kg"
		"\nIhannepainosi on " << (pituus - 100) << "kg"
		"\nErotus" << (paino - (pituus - 100));




}