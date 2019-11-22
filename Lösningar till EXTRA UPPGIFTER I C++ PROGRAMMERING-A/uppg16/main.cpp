/*
Euklides (grek. Eukleides), f�dd ca 325 f.Kr., d�d ca 265 f.Kr.,
var en grekisk matematiker som var verksam i Alexandria
(nuvarande Egypten) vid tiden 300 f.Kr.
Euklides algoritm �r i aritmetiken f�ljande procedur f�r att best�mma st�rsta
gemensamma delaren (i kursboken kallad f�r st�rsta gemensamma faktorn, sgf)
till tv� naturliga tal m och n:
dividera det st�rre, s�g m, med det mindre n, varvid man f�r resten r1;
dividera n med r1, varvid man f�r resten r2
dividera r1 med r2, varvid man f�r resten r3, och forts�tt processen tills man f�r resten 0;
den sista icke-f�rsvinnande resten �r d� st�rsta gemensamma delaren till m och n.
Vi tar som exempel talen m = 405 och n = 84.
Vi utf�r divisionerna i tur och ordning enligt f�ljande:
405:84 = 4 rest 69
84:69 = 1 rest 15
69:15 = 4 rest 9
15:9 = 1 rest 6
9:6 = 1 rest 3
6:3 = 2 rest 0.
Den sista resten f�re 0 �r 3,
vilket allts� �r den st�rsta gemensamma delaren till 405 och 84.
Skriv ett program som med hj�lp av Euklides algoritm ber�knar st�rsta gemensamma delare
till tv� godtyckliga heltal.
*/
#include <iostream>
#include <string>
using namespace std;
int main() {
	setlocale(LC_ALL, "swedish");
	int numerator, denominator;

	cout << "Mata in t�ljaren :>";
	cin >> numerator;
	cout << "Mata in n�mnaren :>";
	cin >> denominator;

		

	int rest;
	
	rest = numerator % denominator;
	if (rest == 0)  // Ett litet till�gg s� att programmet klarar om det �r j�mnt delbart
	{       
		cout << numerator << '/' << denominator << " kan skrivas " << (numerator/denominator
		) << endl;

	}
    else
    {
			while ( (denominator % rest) != 0 ) {
			rest = denominator % rest;
			}	
			
			cout << "Minsta gemensamma n�mnare f�r " << numerator << " och " << denominator << " �r " << rest << endl;
			cout << numerator << '/' << denominator << " kan allts� skrivas " << (numerator/rest) << '/' << (denominator/rest) << endl;
   } 

	return 0;
}
