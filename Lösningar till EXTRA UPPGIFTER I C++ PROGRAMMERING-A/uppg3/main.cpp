/*
G�r ett program d�r man kan mata in en varas pris f�re moms. Momsen ber�knas som 25% av
varans pris f�re moms.
Anta att du matar in 100kr vid k�rningen. Programmet ska d� redovisa utskriften:
*/

#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "swedish");
	float nettopris,moms,bruttopris;
	cout << "Mata in pris f�re moms: ";
	cin >> nettopris;
	
	moms = nettopris * 25 / 100; // momsen i kronor, givet 25% moms
	bruttopris = nettopris + moms; // priset innan moms plus moms
	
	cout << "Pris f�re moms " << nettopris << endl;
	cout << "Moms " << moms << endl;
	cout << "Pris med moms " << bruttopris <<endl;
	
	return 0;
}
