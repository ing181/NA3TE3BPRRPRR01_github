/*
1. Gör ett program som kan beräkna arean och omkretsen av en cirkel om användaren (du) matar in
cirkelns radie.
Skapa en variabel av typen double (decimaltal / flyttal) PI double PI=3.1416 -glöm ej
använda decimalpunkt !!
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
	cout << "En cirkel med radien " << radie << " längdenheter har omkretsen " << omkrets << " längdenheter" << endl;
	return 0;
}
