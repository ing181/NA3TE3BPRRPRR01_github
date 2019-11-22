/*
Ett m�nniskohj�rta sl�r i medeltal ett slag per sekund, hur m�nga slag blir det totalt under en
livstid p� 78 �r? Antag att det g�r 365.25 dagar p� ett �r.
a) Skriv ett program som skriver ut resultatet tillsammans med en l�mplig text.
b) Vad blir resultatet om hj�rtat sl�r 75 slag per minut?
*/
#include <iostream>
#include <string>
#include <iomanip> // F�r  << fixed << setprecision(2)
using namespace std;
int main() {
	setlocale(LC_ALL, "swedish");
	// P� 78 �r g�r det 78*365.25 dagar
	// P� en dag g�r det 60*60*24 sekunder
	const double livssekunder = 78*365.25*60*60*24; // 60 hj�rtslag / min
	const double livssekunder_extra = 78*365.25*75*60*24; // s�tter 60 hj�rtslag till 75
	// Ger utskriften i decimalform med tv� decimalers noggranhet "<< fixed << setprecision(2)"
	cout << "Hj�rtslag i et 78 �rigt liv: "<< fixed << setprecision(2) << livssekunder << " om hj�rtat sl�r med ett slag i sekunden" << endl;
	cout << "Hj�rtslag i et 78 �rigt liv: "<< fixed << setprecision(2) << livssekunder_extra << " om hj�rtat sl�r med 75 slag per minut" << endl;


	return 0;
}
