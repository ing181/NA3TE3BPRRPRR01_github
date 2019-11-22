/*
Skriv ett program som beräknar hur ett belopp ( svenska kr ) kan erhållas i sedlar av så hög
valör som möjligt.
T ex ger beloppet 24749:-
24 tusenkronorssedlar, 1 femhundra-kronorssedel, 2 hundrakronorssedel, 0 femtiokronorssedlar, 2
tjugokronorssedlar och 9 kronor.
Resultatet på skärmen kan se ut så här:
Ange belopp: 24749
Valör Antal
============
*1000*******24*
**500*********1*
**100*********2*
***50*********0*
***20*********2*
kvar**********9*
*/
#include <iostream>
#include <string>
using namespace std;
int main() {
	setlocale(LC_ALL, "swedish");
	
	int sek,sek2,tusen,femhundra,hundra,femtio,tjugo;
	cout << "Hur mycket pengar har du? (SEK) ";
	cin >> sek;
	sek2=sek;
	// Tusenkronorssedlar
	tusen = sek / 1000;
	sek = sek - tusen * 1000; // Ta bort pengarna som redan finns i tusenlappar
	
	femhundra = sek / 500;
	sek = sek - femhundra * 500; // Ta bort pengarna som redan finns i femhundralappar
	
	hundra = sek / 100;
	sek = sek - hundra * 100; // Ta bort pengarna som redan finns i hundralappar
	
	femtio = sek / 50;
	sek = sek - femtio * 50; // Ta bort pengarna som redan finns i femtiolappar
	
	tjugo = sek / 20;
	sek = sek - tjugo * 20; // Ta bort pengarna som redan finns i tjugolappar
	
	cout << "Det blir" << endl;
	cout << tusen << " tusenlappar " << femhundra << " femhundralappar " <<  hundra << " hundralappar " << femtio << " femtiolappar " << tjugo << "  tjugolappar " << " och " << sek << " kronor " << endl;
	
	return 0;
}
