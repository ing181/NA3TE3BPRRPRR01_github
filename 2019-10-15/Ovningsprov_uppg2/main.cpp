/*
Anv�nd en repetitionssats (for- eller while)
f�r att �ndra alla tal i ett talf�lt med 10 platser
s� att alla negativa tal blir positiva
tal med samma absolutbelopp.
Exempelvis �ndras talet -12 till talet 12. 
Positiva tal ska inte f�r�ndras. 
Du ska anv�nda en repetitionssatser
f�r att skriva ut talf�ltet f�re f�r�ndringen
och efter f�r�ndringen.
*/
#include <iostream>
using namespace std;
int main() {
	int talfalt[] = {-7,6,-99,0,3,-2,33,7,-1,7};
	for (int i=0; i<10; i++)
	{
		cout << talfalt[i] << " ";
		if (talfalt[i] < 0)
		{
			talfalt[i] = talfalt[i] * (-1);
		}
	}
	cout << endl;
	
	for (int i=0; i<10; i++)
	{
		cout << talfalt[i] << " ";
	}

	return 0;
}
