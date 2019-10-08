#include <iostream>
using namespace std;
int main() {
	   /* 
	   Man kan tänka så här:
	   "Detta är logiskt och kan inte tolkas fel"
	   Då fungerar det!
	   Man kan till exempel göra villkoret (n<2 i exemplet nedan) 
	   hur kommplicerat som helst. Med en massa logiska operatorer
	   EX: (n<2) || (m>2) och så vidare...
	   Du kan ha flera heltalsvariabler som deklareras i forsatsen
	   EX: int n=0, m= -10 och så vidare...
	   Förändringen kan också utföras på flera variabler
	   EX: n++, m=m-2 och så vidare...
	   */
	// for (variabler deklareras och ges värden ; villkor ; ändring)
	int k=0; // Kan användas i for-satsen. Då den är deklarerad innan for-satsen.
	for (int n=0, m= -10; ( (n<2) || (m>2) ); n++,m=m-2,k++)
	{
		cout << "n=" << n << " m=" << m << endl;
		cout << k << endl;
	}

	return 0;
}

