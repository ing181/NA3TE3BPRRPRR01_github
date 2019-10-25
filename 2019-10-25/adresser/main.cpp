#include <iostream>
using namespace std;
int main() {

	int tal = 6;
	cout << tal << endl;
	cout << &tal << endl; // Adressen till platsen där
						   // innehållet i tal finns
	int *p; // Variabel som kan innehålla adressen till en int
	p = &tal; // p innehåller nu adressen till variabeln tal
	cout << *p << endl; // "Skriver ut på skärmen det som finns
	                    // på adressen p
	
	
	
	
	return 0;
}
