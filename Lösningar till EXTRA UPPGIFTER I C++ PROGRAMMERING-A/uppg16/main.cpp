/*
Euklides (grek. Eukleides), född ca 325 f.Kr., död ca 265 f.Kr.,
var en grekisk matematiker som var verksam i Alexandria
(nuvarande Egypten) vid tiden 300 f.Kr.
Euklides algoritm är i aritmetiken följande procedur för att bestämma största
gemensamma delaren (i kursboken kallad för största gemensamma faktorn, sgf)
till två naturliga tal m och n:
dividera det större, säg m, med det mindre n, varvid man får resten r1;
dividera n med r1, varvid man får resten r2
dividera r1 med r2, varvid man får resten r3, och fortsätt processen tills man får resten 0;
den sista icke-försvinnande resten är då största gemensamma delaren till m och n.
Vi tar som exempel talen m = 405 och n = 84.
Vi utför divisionerna i tur och ordning enligt följande:
405:84 = 4 rest 69
84:69 = 1 rest 15
69:15 = 4 rest 9
15:9 = 1 rest 6
9:6 = 1 rest 3
6:3 = 2 rest 0.
Den sista resten före 0 är 3,
vilket alltså är den största gemensamma delaren till 405 och 84.
Skriv ett program som med hjälp av Euklides algoritm beräknar största gemensamma delare
till två godtyckliga heltal.
*/
#include <iostream>
#include <string>
using namespace std;
int main() {
	setlocale(LC_ALL, "swedish");
	int numerator, denominator;

	cout << "Mata in täljaren :>";
	cin >> numerator;
	cout << "Mata in nämnaren :>";
	cin >> denominator;

		

	int rest;
	
	rest = numerator % denominator;
	if (rest == 0)  // Ett litet tillägg så att programmet klarar om det är jämnt delbart
	{       
		cout << numerator << '/' << denominator << " kan skrivas " << (numerator/denominator
		) << endl;

	}
    else
    {
			while ( (denominator % rest) != 0 ) {
			rest = denominator % rest;
			}	
			
			cout << "Minsta gemensamma nämnare för " << numerator << " och " << denominator << " är " << rest << endl;
			cout << numerator << '/' << denominator << " kan alltså skrivas " << (numerator/rest) << '/' << (denominator/rest) << endl;
   } 

	return 0;
}
