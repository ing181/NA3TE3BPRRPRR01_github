#include <iostream>
using namespace std;
// Funktioner deklareras s� h�r
// datatyp_utv�rde namn(datatyp_inv�rde, datatyp_inv�rde, ...);
// Deklarerar utv�rde, namn och inv�rde (inv�rden)

// Funktion som adderar tv� tal
float addera(float, float); // Funktionsdeklaration
int main() {
	
	//float utvarde = 8.5;
	float utvarde = addera(2.4, 6.1); // H�r anv�nds funktionen (Anropas)
									  // 2.4 kopieras till x och 6.1 kopieras till y
    cout << utvarde << endl;
	return 0;
}
// H�r slutar huvudprogrammet
float addera(float x, float y) // Funktionsdefinition "Vad den g�r"
{
	return (x+y); // Skickas tillbaka
}
