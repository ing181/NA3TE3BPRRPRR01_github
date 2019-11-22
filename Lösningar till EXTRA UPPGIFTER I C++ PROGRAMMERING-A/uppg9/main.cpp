/*
Skriv ett program som smidigt avrundar decimaltal-
Ex: 1.5 skall avrundas upp�t till 2
1.49 avrundas ned�t till 1.
Datatypen integer trunkerar decimaltal till n�rmaste l�gre heltal -
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
	if ( (f + 0.5) >= (i+1) ) // Om flyttalt + 0.5 �r st�rre �n det avklippta heltalet + 1
	// ska vi avrunda upp�t.

	   cout << "Avrundas til " << (i+1) << endl;
	else
	   cout << "Avrundas til " << i << endl;
	
	// Detta blir samma sak 
	if ( (f + 0.5) < (i+1) )
		cout << "Avrundas til " << i << endl;
	else
	   cout << "Avrundas til " << (i+1) << endl;
	

    // Riktigt elegant!! (och lite �verkurs)
    i = (f + 0.5) < (i+1) ? i : i+1;
    cout << "Avrundas til " << i << endl;
	return 0;
}
