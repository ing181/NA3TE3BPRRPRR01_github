// Aritmetiska operatorer
#include <iostream>
using namespace std;
int main() {
	// Operatorer
	// operand operator operand
	// +, -, * Fungerar på samma sätt
	// som när ni räknar
	// på heltals och på flyttalsvariabler
	// och heltal och flyttal
	// flyttal = decimaltal
	// "/" (delat med) fungerar som väntat med
	// flyttalsvariabler och flyttal
	
	// Däremot heltal som divideras returnerar
	// heltalsdelan och "slänger bort" 
	// (trunkerar) decimaldelen
	// EX
	cout << 4/3 << endl; // Skriver ut 1
	// operatorn modulus % tar hand om resten
	cout << 4%3 << endl; // Skriver ut 1
	// Således: 4/3 = 1 + 1/3
	// OBS! modulus används bara till heltal

	return 0;
}
