/*
Skriv ett program som smidigt avrundar decimaltal-
Ex: 1.5 skall avrundas uppåt till 2
1.49 avrundas nedåt till 1.
Datatypen integer trunkerar decimaltal till närmaste lägre heltal -
det kanske man kan dra nytta av i denna uppgift.......
*/
#include <iostream>
#include <string>
using namespace std;
int main() {
	setlocale(LC_ALL, "swedish");
	cout << "Mata in ett flyttal (decimaltal) ";
	double f;
	cin >> f;
	int i = f;
	cout << i << endl;
	if ( (f + 0.5) >= (i+1) ) // Om flyttalt + 0.5 är större än det avklippta heltalet + 1
	// ska vi avrunda uppåt.

	   cout << "Avrundas til " << (i+1) << endl;
	else
	   cout << "Avrundas til " << i << endl;
	
	// Detta blir samma sak 
	if ( (f + 0.5) < (i+1) )
		cout << "Avrundas til " << i << endl;
	else
	   cout << "Avrundas til " << (i+1) << endl;
	

    // Riktigt elegant!! (och lite överkurs)
    i = (f + 0.5) < (i+1) ? i : i+1;
    cout << "Avrundas til " << i << endl;
	return 0;
}
