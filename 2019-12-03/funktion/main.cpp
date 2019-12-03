#include <iostream>
using namespace std;
// Funktioner deklareras så här
// datatyp_utvärde namn(datatyp_invärde, datatyp_invärde, ...);
// Deklarerar utvärde, namn och invärde (invärden)

// Funktion som adderar två tal
float addera(float, float); // Funktionsdeklaration
int main() {
	
	//float utvarde = 8.5;
	float utvarde = addera(2.4, 6.1); // Här används funktionen (Anropas)
									  // 2.4 kopieras till x och 6.1 kopieras till y
    cout << utvarde << endl;
	return 0;
}
// Här slutar huvudprogrammet
float addera(float x, float y) // Funktionsdefinition "Vad den gör"
{
	return (x+y); // Skickas tillbaka
}
