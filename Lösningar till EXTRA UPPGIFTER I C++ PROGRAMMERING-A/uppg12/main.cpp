/*
G�r ett program som testar om ett inskrivet tal �r ett primtal
Primtal �r st�rre �n 1 och endast delbara med ett och sig sj�lv.
*/
#include <iostream>
#include <string>
using namespace std;
int main() {
	setlocale(LC_ALL, "swedish");
	int prim;
	cout << "Skriv in ett tal, s� kollar jag om det �r ett primtal:> ";
	cin >> prim;
	bool is_a_prime_number = true; // Vilket kan motbevisas i for-satsen nedan
	
	// Nu kollar vi om resten n�r vi dividerar prim blir 0. D� �r det inget primtal
	// 1 kollar vi inte med, vi kollar alla tal till och med prim-1
	for ( int i=2; i<prim; i++)
	{
		if ( (prim % i) == 0 ) {
				cout << prim << " �r inget primtal" << endl;
				// Ytterligare information
				cout << "Det �r till exempel j�mnt delbart med " << i << endl;
				is_a_prime_number = false;
				break; // Nu kan vi sluta leta
			}
		
	}
	if (is_a_prime_number) // Om det inte �ndrats i loopen �r det fortfarande sant
		cout << prim << " �r ett primtal" << endl;
	
	return 0;
}
