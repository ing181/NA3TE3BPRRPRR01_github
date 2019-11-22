/*
Ett människohjärta slår i medeltal ett slag per sekund, hur många slag blir det totalt under en
livstid på 78 år? Antag att det går 365.25 dagar på ett år.
a) Skriv ett program som skriver ut resultatet tillsammans med en lämplig text.
b) Vad blir resultatet om hjärtat slår 75 slag per minut?
*/
#include <iostream>
#include <string>
#include <iomanip> // För  << fixed << setprecision(2)
using namespace std;
int main() {
	setlocale(LC_ALL, "swedish");
	// På 78 år går det 78*365.25 dagar
	// På en dag går det 60*60*24 sekunder
	const double livssekunder = 78*365.25*60*60*24; // 60 hjärtslag / min
	const double livssekunder_extra = 78*365.25*75*60*24; // sätter 60 hjärtslag till 75
	// Ger utskriften i decimalform med två decimalers noggranhet "<< fixed << setprecision(2)"
	cout << "Hjärtslag i et 78 årigt liv: "<< fixed << setprecision(2) << livssekunder << " om hjärtat slår med ett slag i sekunden" << endl;
	cout << "Hjärtslag i et 78 årigt liv: "<< fixed << setprecision(2) << livssekunder_extra << " om hjärtat slår med 75 slag per minut" << endl;


	return 0;
}
