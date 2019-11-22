/*
Gör ett program som med nästlade loopar skriver ut denna trevliga figur.
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
	
	
// Vi ska ha tre stycken "halva granar" så vi kör
// koden som skapar en halv gran tre gånger	
for (int h=0; h<3; h++)
{	
	// "halva granen"
	for (int i=0; i<5; i++) // 5 radbrytninar till varje halvgran
	{
		for (int j=0; j<=i; j++) // Första gången är j=0 och vi ska skriva ut en stjärna
		{						 // Andra gången (efter radbrytning i yttre for-satsen)
			cout << '*';		 // är j=1 och vi ska skriva ut två stjärnor. Och så vidare...
		}
		
		cout << endl;
	}
}
	return 0;
}
