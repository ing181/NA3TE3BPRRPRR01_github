#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL,"swedish");
	
	int i = 0;
	while (i < 10) // S� l�nge detta �r sant, forts�tt
	{
		cout << "Det var sant 1" << endl;
		cout << "Det var sant 2" << endl;
		cout << "F�re �kning i = " << i << endl;
		i++;
		cout << "Efter �kningi = " << i << endl;
	}
	
	
	// Detta utf�rs minst en g�ng
	do {
		
		cout << "Detta skrivs ut" << endl;
    } while (1>2); // Om det �r falsk, g�rs det inte om
	
	
	
	
	
	
	
	

	return 0;
}
