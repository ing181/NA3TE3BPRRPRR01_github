/*
Skriv ett program som beräknar volymen av en cylinder, kub, kon eller ett klot när användaren
matar in för beräkningen nödvändiga värden.
*/
#include <iostream>
#include <string>
using namespace std;
int main() {
	setlocale(LC_ALL, "swedish");
	const float PI = 3.141592654;
	cout << "Vilken volym vill du beräkna?" << endl;
	cout << "Cylinder (c)" << endl;
	cout << "Kub (u)" << endl;
	cout << "Kon (o)" << endl;
	cout << "Klot (l)" << endl;
	char val;
	cin >> val;
	float h,r,l;
	switch (val)
	{
		case 'c': // Cylinder
			// pi*r^2*h
			cout << "Ange radien på cylindern ";
			cin >> r;
			cout << "Ange höjden på cylindern ";
			cin >> h;
		    cout << "Volymen är " << (PI*r*r*h) << endl;
		    break;
		case 'u': // Kub
			// l^3
			cout << "Ange sidans längd på kuben ";
		    cout << "Volymen är " << (l*l*l) << endl;
		     break;
		case 'o': // Kon
		    // (pi*r^2*h)3
		    cout << "Ange radien på konen ";
			cin >> r;
			cout << "Ange höjden på konen ";
			cin >> h;
		    cout << "Volymen är " << (PI*r*r*h/3) << endl;
		     break;
		case 'l': // Klot
			// (4*pi*r^3)/3
		    cout << "Ange radien på klotet ";
			cin >> r;
		    cout << "Volymen är " << (4*PI*r*r*r/3) << endl;
		     break;
		default:
			cout << "Felaktigt val" << endl;
	}

	return 0;
}
