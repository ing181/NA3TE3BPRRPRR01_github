// Aritmetiska operatorer
#include <iostream>
using namespace std;
int main() {
	// Operatorer
	// operand operator operand
	// +, -, * Fungerar p� samma s�tt
	// som n�r ni r�knar
	// p� heltals och p� flyttalsvariabler
	// och heltal och flyttal
	// flyttal = decimaltal
	// "/" (delat med) fungerar som v�ntat med
	// flyttalsvariabler och flyttal
	
	// D�remot heltal som divideras returnerar
	// heltalsdelan och "sl�nger bort" 
	// (trunkerar) decimaldelen
	// EX
	cout << 4/3 << endl; // Skriver ut 1
	// operatorn modulus % tar hand om resten
	cout << 4%3 << endl; // Skriver ut 1
	// S�ledes: 4/3 = 1 + 1/3
	// OBS! modulus anv�nds bara till heltal

	return 0;
}
