#include <iostream>
using namespace std;

int main() {
	const float PI = 3.141592654;
	PI = 5;
	// datatypen shar anv�nds f�r att representera tecken
	// enligt en given tabell.
	// ASCII-tabbelen eller UNICODE-tabellen
	// Finns p� n�tet!
	// L�nk hittar du h�r
	// https://github.com/ing181/NA3TE3BPRRPRR01_github/wiki
	
	
	char t = 65;
	t=t+32; // t tilldelas t + 32, det vill s�ga 65+32=97
	cout << t << endl; // Tecknet som representeras av heltalet 97
	
	// Flyttal (decimaltal)
	float f = 6.9; 

	
	cout << sizeof(short) << endl;
	unsigned short kort = 65535;  // F�r det plats
	cout << kort << endl;

	// Typomvandling
	// Omvandling fr�n en datatyp till en annan
    // (datatyp som det omvandlas tii) datatyp
	// EX:
	
	cout << (char)tal << endl; // Omvandlar en int till char
	cout << (int)t << endl; // Omvandlar en char till int
	
	
	
	
	
	return 0;
}
