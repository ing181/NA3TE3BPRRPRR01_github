/*
G�r ett program som med n�stlade loopar skriver ut denna trevliga figur.
*
**
***
****
*****
*
**
***
****
*****
*
**
***
****
*****
*/
#include <iostream>
#include <string>
using namespace std;
int main() {
	setlocale(LC_ALL, "swedish");
	
	
// Vi ska ha tre stycken "halva granar" s� vi k�r
// koden som skapar en halv gran tre g�nger	
for (int h=0; h<3; h++)
{	
	// "halva granen"
	for (int i=0; i<5; i++) // 5 radbrytninar till varje halvgran
	{
		for (int j=0; j<=i; j++) // F�rsta g�ngen �r j=0 och vi ska skriva ut en stj�rna
		{						 // Andra g�ngen (efter radbrytning i yttre for-satsen)
			cout << '*';		 // �r j=1 och vi ska skriva ut tv� stj�rnor. Och s� vidare...
		}
		
		cout << endl;
	}
}
	return 0;
}
