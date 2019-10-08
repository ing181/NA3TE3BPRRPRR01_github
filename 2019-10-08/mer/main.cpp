#include <iostream>
using namespace std;
int main() {
	   /* 
	   Man kan t�nka s� h�r:
	   "Detta �r logiskt och kan inte tolkas fel"
	   D� fungerar det!
	   Man kan till exempel g�ra villkoret (n<2 i exemplet nedan) 
	   hur kommplicerat som helst. Med en massa logiska operatorer
	   EX: (n<2) || (m>2) och s� vidare...
	   Du kan ha flera heltalsvariabler som deklareras i forsatsen
	   EX: int n=0, m= -10 och s� vidare...
	   F�r�ndringen kan ocks� utf�ras p� flera variabler
	   EX: n++, m=m-2 och s� vidare...
	   */
	// for (variabler deklareras och ges v�rden ; villkor ; �ndring)
	int k=0; // Kan anv�ndas i for-satsen. D� den �r deklarerad innan for-satsen.
	for (int n=0, m= -10; ( (n<2) || (m>2) ); n++,m=m-2,k++)
	{
		cout << "n=" << n << " m=" << m << endl;
		cout << k << endl;
	}

	return 0;
}

