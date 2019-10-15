#include <iostream>
using namespace std;
int main() {
	
	double falt[4];
	int  raknare = 3;
	while (raknare >= 0)
	{
		// Värdena matas in där
		// index=3, 2, 1, 0
		falt[raknare] = raknare;
		raknare--;
	}
	for (int i=0; i<4; i++)
	{
		// Skrivs ut: index=0, 1, 2, 3
		cout << falt[i] << " " << endl;
	}
	cout << "Värdet där index=3 " << falt[3] << endl;
    falt[3] = -5;
	cout << "Värdet där index=3 " << falt[3] << endl;

	return 0;
}
