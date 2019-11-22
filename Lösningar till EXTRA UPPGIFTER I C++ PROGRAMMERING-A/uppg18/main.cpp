/*
I USA brukar en bils bensinförbrukning anges i miles/gallons.
Skriv ett program som läser in bensinförbrukningen angiven i gallon ”US-style” och översätter den
till liter/mil.
Följande gäller 1 mile = 1.609 km och 1 gallon = 3.785 liter.
*/
#include <iostream>
#include <string>
using namespace std;
int main() {
	setlocale(LC_ALL, "swedish");
	float us, eu;
	cout << "Hej, så du ska köra bil i Europa!" << endl;
	cout << "Ange bilens förbrukning i miles/gallons "; // Sträcka / volym
	cin >> us;
	// Gör om till gallons/mile (volym / sträcka)
	us = 1/us;
	// Omräkningsfaktor
	// Till mil: 1.609 km = 0.1609 mil
	const float omrakningsfaktor = 3.785/0.1609;
	eu = us * omrakningsfaktor;
	cout << "I Europa hade man angett " << eu << " liter/mil" << endl;
	
	
	return 0;
}
