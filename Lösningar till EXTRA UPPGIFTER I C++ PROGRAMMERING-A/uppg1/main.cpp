/*
1. G�r ett program som kan ber�kna arean och omkretsen av en cirkel om anv�ndaren (du) matar in
cirkelns radie.
Skapa en variabel av typen double (decimaltal / flyttal) PI double PI=3.1416 -gl�m ej
anv�nda decimalpunkt !!
*/

#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "swedish");
	// omkretsen=2*PI*radien
	const float PI = 3.1416;
	float radie, omkrets;
	cout << "Mata in cirkelns radie: ";
	cin >> radie;
	omkrets = 2*PI*radie;
	cout << "En cirkel med radien " << radie << " l�ngdenheter har omkretsen " << omkrets << " l�ngdenheter" << endl;
	return 0;
}
