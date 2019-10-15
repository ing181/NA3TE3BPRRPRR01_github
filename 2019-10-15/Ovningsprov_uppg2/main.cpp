/*
Använd en repetitionssats (for- eller while)
för att ändra alla tal i ett talfält med 10 platser
så att alla negativa tal blir positiva
tal med samma absolutbelopp.
Exempelvis ändras talet -12 till talet 12. 
Positiva tal ska inte förändras. 
Du ska använda en repetitionssatser
för att skriva ut talfältet före förändringen
och efter förändringen.
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
