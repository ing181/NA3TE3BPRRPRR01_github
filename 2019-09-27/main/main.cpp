#include <iostream>
using namespace std;

int main() {
	const float PI = 3.141592654;
	PI = 5;
	// datatypen shar används för att representera tecken
	// enligt en given tabell.
	// ASCII-tabbelen eller UNICODE-tabellen
	// Finns på nätet!
	// Länk hittar du här
	// https://github.com/ing181/NA3TE3BPRRPRR01_github/wiki
	
	
	char t = 65;
	t=t+32; // t tilldelas t + 32, det vill säga 65+32=97
	cout << t << endl; // Tecknet som representeras av heltalet 97
	
	// Flyttal (decimaltal)
	float f = 6.9; 

	
	cout << sizeof(short) << endl;
	unsigned short kort = 65535;  // Får det plats
	cout << kort << endl;

	// Typomvandling
	// Omvandling från en datatyp till en annan
    // (datatyp som det omvandlas tii) datatyp
	// EX:
	
	cout << (char)tal << endl; // Omvandlar en int till char
	cout << (int)t << endl; // Omvandlar en char till int
	
	
	
	
	
	return 0;
}
