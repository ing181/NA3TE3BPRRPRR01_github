// Tilldelande operatorer
#include <iostream>
using namespace std;
int main() {
	
	// "Tilldelar v�rdet till h�ger till variabeln
	// till vnster"
	// EX:
	int tal = 7;
	int x = 0; // Tilldela alltid ett v�rde...
	x = (x + 2); // ...innan du anv�nder en variabel
	// 1.Det som finns i parantesen r�knas ut
	// och 2. tilldelas x
	// F�r din bekv�mlighet
	tal++; 
	tal+=1;
	// samma som tal = tal + 1;
	
	// Ytterligare en finess!
	// Skilnaden mellan
    int nummer = 0;
    // prefix
    // 1. nummer �kar med 1
    // 2. inneh�llet i nummer skrivs ut
    cout << "nummer=" << ++nummer << endl; // 1
    cout << "nummer=" << nummer++ << endl; // 1
    cout << "nummer=" << nummer << endl; // 2
	return 0;
}
