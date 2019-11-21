// Tilldelande operatorer
#include <iostream>
using namespace std;
int main() {
	
	// "Tilldelar värdet till höger till variabeln
	// till vnster"
	// EX:
	int tal = 7;
	int x = 0; // Tilldela alltid ett värde...
	x = (x + 2); // ...innan du använder en variabel
	// 1.Det som finns i parantesen räknas ut
	// och 2. tilldelas x
	// För din bekvämlighet
	tal++; 
	tal+=1;
	// samma som tal = tal + 1;
	
	// Ytterligare en finess!
	// Skilnaden mellan
    int nummer = 0;
    // prefix
    // 1. nummer ökar med 1
    // 2. innehållet i nummer skrivs ut
    cout << "nummer=" << ++nummer << endl; // 1
    cout << "nummer=" << nummer++ << endl; // 1
    cout << "nummer=" << nummer << endl; // 2
	return 0;
}
