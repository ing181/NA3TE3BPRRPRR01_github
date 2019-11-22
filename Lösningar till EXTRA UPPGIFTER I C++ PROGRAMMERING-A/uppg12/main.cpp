/*
Gör ett program som testar om ett inskrivet tal är ett primtal
Primtal är större än 1 och endast delbara med ett och sig själv.
*/
#include <iostream>
#include <string>
using namespace std;
int main() {
	setlocale(LC_ALL, "swedish");
	int prim;
	cout << "Skriv in ett tal, så kollar jag om det är ett primtal:> ";
	cin >> prim;
	bool is_a_prime_number = true; // Vilket kan motbevisas i for-satsen nedan
	
	// Nu kollar vi om resten när vi dividerar prim blir 0. Då är det inget primtal
	// 1 kollar vi inte med, vi kollar alla tal till och med prim-1
	for ( int i=2; i<prim; i++)
	{
		if ( (prim % i) == 0 ) {
				cout << prim << " är inget primtal" << endl;
				// Ytterligare information
				cout << "Det är till exempel jämnt delbart med " << i << endl;
				is_a_prime_number = false;
				break; // Nu kan vi sluta leta
			}
		
	}
	if (is_a_prime_number) // Om det inte ändrats i loopen är det fortfarande sant
		cout << prim << " är ett primtal" << endl;
	
	return 0;
}
