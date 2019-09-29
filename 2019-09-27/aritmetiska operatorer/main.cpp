// Aritmetiska operatorer
// Operatorer är något som påverkar
// det som står till vänster och till
// höger om operatorn
#include <iostream>
using namespace std;
int main() {
	
	// Modulusoperatorn "%", returnerar
	// resten vid heltalsdivision
	int tal = 5;
	int rest = tal % 2; // Resten vid heltalsdivision
	tal = tal / 2; // Heltalsdeln
	
	cout << "Heltal: " << tal << " Rest: " << rest << endl;
	cout <<  tal << " och " << rest << "/" << tal << endl;
	int minuter = 122;
	cout << minuter << " minuter motsvarar " << minuter/60 << 
	" timmar och " << minuter%60 << " minuter " << endl;
	
	return 0;
}
