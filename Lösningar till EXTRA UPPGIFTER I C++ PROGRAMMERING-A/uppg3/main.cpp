/*
Gör ett program där man kan mata in en varas pris före moms. Momsen beräknas som 25% av
varans pris före moms.
Anta att du matar in 100kr vid körningen. Programmet ska då redovisa utskriften:
*/

#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "swedish");
	float nettopris,moms,bruttopris;
	cout << "Mata in pris före moms: ";
	cin >> nettopris;
	
	moms = nettopris * 25 / 100; // momsen i kronor, givet 25% moms
	bruttopris = nettopris + moms; // priset innan moms plus moms
	
	cout << "Pris före moms " << nettopris << endl;
	cout << "Moms " << moms << endl;
	cout << "Pris med moms " << bruttopris <<endl;
	
	return 0;
}
