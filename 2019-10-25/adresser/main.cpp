#include <iostream>
using namespace std;
int main() {

	int tal = 6;
	cout << tal << endl;
	cout << &tal << endl; // Adressen till platsen d�r
						   // inneh�llet i tal finns
	int *p; // Variabel som kan inneh�lla adressen till en int
	p = &tal; // p inneh�ller nu adressen till variabeln tal
	cout << *p << endl; // "Skriver ut p� sk�rmen det som finns
	                    // p� adressen p
	
	
	
	
	return 0;
}
