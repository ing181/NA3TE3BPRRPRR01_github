/*
I USA brukar en bils bensinf�rbrukning anges i miles/gallons.
Skriv ett program som l�ser in bensinf�rbrukningen angiven i gallon �US-style� och �vers�tter den
till liter/mil.
F�ljande g�ller 1 mile = 1.609 km och 1 gallon = 3.785 liter.
*/
#include <iostream>
#include <string>
using namespace std;
int main() {
	setlocale(LC_ALL, "swedish");
	float us, eu;
	cout << "Hej, s� du ska k�ra bil i Europa!" << endl;
	cout << "Ange bilens f�rbrukning i miles/gallons "; // Str�cka / volym
	cin >> us;
	// G�r om till gallons/mile (volym / str�cka)
	us = 1/us;
	// Omr�kningsfaktor
	// Till mil: 1.609 km = 0.1609 mil
	const float omrakningsfaktor = 3.785/0.1609;
	eu = us * omrakningsfaktor;
	cout << "I Europa hade man angett " << eu << " liter/mil" << endl;
	
	
	return 0;
}
