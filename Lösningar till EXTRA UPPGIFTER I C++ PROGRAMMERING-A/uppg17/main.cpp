/*
Skriv ett program som ber�knar volymen av en cylinder, kub, kon eller ett klot n�r anv�ndaren
matar in f�r ber�kningen n�dv�ndiga v�rden.
*/
#include <iostream>
#include <string>
using namespace std;
int main() {
	setlocale(LC_ALL, "swedish");
	const float PI = 3.141592654;
	cout << "Vilken volym vill du ber�kna?" << endl;
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
			cout << "Ange radien p� cylindern ";
			cin >> r;
			cout << "Ange h�jden p� cylindern ";
			cin >> h;
		    cout << "Volymen �r " << (PI*r*r*h) << endl;
		    break;
		case 'u': // Kub
			// l^3
			cout << "Ange sidans l�ngd p� kuben ";
		    cout << "Volymen �r " << (l*l*l) << endl;
		     break;
		case 'o': // Kon
		    // (pi*r^2*h)3
		    cout << "Ange radien p� konen ";
			cin >> r;
			cout << "Ange h�jden p� konen ";
			cin >> h;
		    cout << "Volymen �r " << (PI*r*r*h/3) << endl;
		     break;
		case 'l': // Klot
			// (4*pi*r^3)/3
		    cout << "Ange radien p� klotet ";
			cin >> r;
		    cout << "Volymen �r " << (4*PI*r*r*r/3) << endl;
		     break;
		default:
			cout << "Felaktigt val" << endl;
	}

	return 0;
}
